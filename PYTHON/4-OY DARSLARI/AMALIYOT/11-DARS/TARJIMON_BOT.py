import asyncio
from aiogram import Bot, Dispatcher, types, F
from aiogram.filters import CommandStart

from keyboards import get_language_keyboard, get_back_keyboard
from translator import translate_text

TOKEN = "8858998687:AAELJEYVH7Es-TlAPeyDmatalEEEo2ZlWRg"

bot = Bot(token=TOKEN)
dp = Dispatcher()

user_selected_lang = {}

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

# Dasturchi haqida ma'lumot tugmasi bosilganda
@dp.callback_query(F.data == "about_dev")
async def about_developer(callback: types.CallbackQuery):
    dev_text = (
        "👨‍💻 <b>Dasturchi haqida ma'lumot:</b>\n\n"
        "👤 <b>F.I.Sh:</b> Tojimatov Maxmudjon Mirzoxid o'g'li\n"
        "🎓 <b>O'qish joyi:</b> Axborot texnologiyalari va telekommunikatsiya fakulteti, 2-kurs talabasi\n"
        "📚 <b>O'quv markazi:</b> Najot Ta'lim (Python Backend yo'nalishi)\n"
        "🚀 <b>Loyiha:</b> Aiogram 3.x asosidagi Universal Tarjimon Boti\n\n"
        "<i>Dasturlash — kelajak sari qo'yilgan eng to'g'ri qadam!</i>"
    )
    await callback.message.edit_text(dev_text, parse_mode="HTML", reply_markup=get_back_keyboard())
    await callback.answer()

# Orqaga qaytish tugmasi
@dp.callback_query(F.data == "back_to_menu")
async def back_menu(callback: types.CallbackQuery):
    user_name = callback.from_user.first_name
    greeting_text = (
        f"🇺🇿 <b>Salom, {user_name}!</b>\n"
        f"Matnlarni qaysi tilga tarjima qilmoqchisiz? Quyidagi tugmalardan tanlang:"
    )
    await callback.message.edit_text(greeting_text, parse_mode="HTML", reply_markup=get_language_keyboard())
    await callback.answer()

# Til tanlash
@dp.callback_query(F.data.startswith("lang_"))
async def language_selected(callback: types.CallbackQuery):
    lang_code = callback.data.split("_")[1]
    user_selected_lang[callback.from_user.id] = lang_code

    lang_names = {
        "uz": "🇺🇿 O'zbek tili",
        "en": "🇬🇧 English",
        "ru": "🇷🇺 Русский"
    }
    selected_name = lang_names.get(lang_code, "Tanlandi")
    
    await callback.message.answer(
        f"✅ <b>Maqsadli til tanlandi:</b> {selected_name}\n\n"
        f"Endi menga istalgan matnni yuboring, uni ushbu tilga tarjima qilib beraman.\n"
        f"(Tilni o'zgartirish uchun /start buyrug'ini bosing)",
        parse_mode="HTML"
    )
    await callback.answer()

# Matnni tarjima qilish
@dp.message()
async def translate_message(message: types.Message):
    if not message.text:
        return

    target_lang = user_selected_lang.get(message.from_user.id, "uz")
    translated = translate_text(message.text, target_lang)

    await message.answer(
        f"🌐 <b>Tarjima ({target_lang.upper()}):</b>\n\n{translated}",
        parse_mode="HTML"
    )

async def main():
    print("Translate bot ishga tushdi...")
    await dp.start_polling(bot)

if __name__ == "__main__":
    asyncio.run(main())