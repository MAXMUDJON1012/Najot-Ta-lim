import asyncio
from aiogram import Bot, Dispatcher, types, F
from aiogram.filters import CommandStart

# Alohida fayllardan import qilish
from keyboards import get_language_keyboard
from translator import (
    set_user_language,
    get_user_language,
    translate_text,
    LANGUAGES
)

# @BotFather bergan tokenni shu yerga yozing
TOKEN = "8858998687:AAELJEYVH7Es-TlAPeyDmatalEEEo2ZlWRgpython main.py"

bot = Bot(token=TOKEN)
dp = Dispatcher()

# 1. /start bosilganda 3 tilda salomlashish va tugmalarni chiqarish
@dp.message(CommandStart())
async def start_cmd(message: types.Message):
    user_name = message.from_user.first_name
    greeting_text = (
        f"🇺🇿 <b>Salom, {user_name}!</b>\n"
        f"Matnlarni qaysi tilga tarjima qilmoqchisiz? Quyidagi tugmalardan tanlang:\n\n"
        f"🇷🇺 <b>Здравствуйте, {user_name}!</b>\n"
        f"На какой язык вы хотите переводить? Выберите язык ниже:\n\n"
        f"🇬🇧 <b>Hello, {user_name}!</b>\n"
        f"Which language do you want to translate to? Select below:"
    )
    await message.answer(greeting_text, parse_mode="HTML", reply_markup=get_language_keyboard())

# 2. Tugma bosilganda tanlangan tilni saqlash
@dp.callback_query(F.data.startswith("lang_"))
async def language_selected(callback: types.CallbackQuery):
    lang_code = callback.data.split("_")[1]
    set_user_language(callback.from_user.id, lang_code)
    
    selected_name = LANGUAGES.get(lang_code, "Tanlandi")
    
    await callback.message.answer(
        f"✅ <b>Maqsadli til tanlandi:</b> {selected_name}\n\n"
        f"Endi menga istalgan matnni yuboring, uni ushbu tilga tarjima qilib beraman.\n"
        f"(Tilni o'zgartirish uchun /start buyrug'ini bosing)",
        parse_mode="HTML"
    )
    await callback.answer()

# 3. Matn kelganda tarjima qilib yuborish
@dp.message()
async def translate_message(message: types.Message):
    if not message.text:
        return

    target_lang = get_user_language(message.from_user.id)

    try:
        translated = translate_text(message.text, target_lang)
        await message.answer(
            f"🌐 <b>Tarjima ({target_lang.upper()}):</b>\n\n{translated}",
            parse_mode="HTML"
        )
    except Exception:
        await message.answer("Tarjima jarayonida xatolik yuz berdi. Iltimos, qaytadan urinib ko'ring.")

async def main():
    print("Translate bot muvaffaqiyatli ishga tushdi...")
    await dp.start_polling(bot)

if __name__ == "__main__":
    asyncio.run(main())     