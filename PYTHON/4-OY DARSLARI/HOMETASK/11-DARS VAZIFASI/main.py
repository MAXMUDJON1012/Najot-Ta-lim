import asyncio
from aiogram import Bot, Dispatcher, Router, F
from aiogram.filters import Command
from aiogram.types import Message, CallbackQuery

from key import (til_tanlash, asosiy_menu, viloyatlar_tugmalari, tumanlar_tugmalari, orqaga_tumanlarga, viloyatni_top)
from weather import ob_havo_olish

TOKEN = "8618605080:AAHyOs1ntBQovuLrGf9YrAJXSu5oKE_vDqA"

bot = Bot(token=TOKEN)
router = Router()
dp = Dispatcher()
dp.include_router(router)

user_langs = {}

@router.message(Command("start"))
async def start_handler(message: Message):
    # Default til "uz"
    user_langs[message.from_user.id] = "uz"
    await message.answer(
        "👋 Assalomu alaykum! Iltimos, tilni tanlang:\n\n👋 Hello! Please choose a language:",
        reply_markup=til_tanlash()
    )

@router.callback_query(F.data.startswith("lang_"))
async def set_language(callback: CallbackQuery):
    til = callback.data.split("_")[1]
    user_langs[callback.from_user.id] = til
    
    matn = "Muvaffaqiyatli tanlandi! Quyidagi menyudan foydalaning 👇" if til == "uz" else "Successfully selected! Use the menu below 👇"
    
    await callback.message.delete()
    await callback.message.answer(matn, reply_markup=asosiy_menu(til))
    await callback.answer()


@router.message(F.text.in_(["🌐 Tilni o'zgartirish", "🌐 Change Language"]))
async def change_lang_menu(message: Message):
    await message.answer("Tilni tanlang / Choose language:", reply_markup=til_tanlash())

@router.message(F.text.in_(["🌤 Ob-havoni bilish", "🌤 Get Weather"]))
async def viloyatlar_menu(message: Message):
    til = user_langs.get(message.from_user.id, "uz")
    matn = "O'zingizga kerakli viloyatni tanlang:" if til == "uz" else "Select your region:"
    await message.answer(matn, reply_markup=viloyatlar_tugmalari(til))

@router.callback_query(F.data.startswith("region_"))
async def viloyat_tanlandi(callback: CallbackQuery):
    viloyat = callback.data.split("_")[1]
    til = user_langs.get(callback.from_user.id, "uz")
    
    matn = f"📍 <b>{viloyat}</b> viloyatining tumanlari:\nKerakli tumanni tanlang:" if til == "uz" else f"📍 Districts of <b>{viloyat}</b>:\nSelect a district:"
    
    await callback.message.edit_text(matn, reply_markup=tumanlar_tugmalari(viloyat, til), parse_mode="HTML")
    await callback.answer()

@router.callback_query(F.data.startswith("dist_"))
async def tuman_tanlandi(callback: CallbackQuery):
    tuman = callback.data.split("_")[1]
    til = user_langs.get(callback.from_user.id, "uz")
    viloyati = viloyatni_top(tuman)
    
    kutish_matni = f"⏳ {tuman} ob-havosi olinmoqda..." if til == "uz" else f"⏳ Getting weather for {tuman}..."
    await callback.message.edit_text(kutish_matni)
    
    natija = await ob_havo_olish(tuman, til)
    
    await callback.message.edit_text(natija, parse_mode="HTML", reply_markup=orqaga_tumanlarga(viloyati, til))
    await callback.answer()


@router.callback_query(F.data == "back_to_regions")
async def orqaga_viloyatlarga(callback: CallbackQuery):
    til = user_langs.get(callback.from_user.id, "uz")
    matn = "O'zingizga kerakli viloyatni tanlang:" if til == "uz" else "Select your region:"
    await callback.message.edit_text(matn, reply_markup=viloyatlar_tugmalari(til))
    await callback.answer()

@router.callback_query(F.data == "close_menu")
async def yopish_menu(callback: CallbackQuery):
    await callback.message.delete()
    await callback.answer()


@router.message(F.text.in_(["👨‍💻 Dasturchi haqida", "👨‍💻 About Developer"]))
async def men_haqimda(message: Message):
    til = user_langs.get(message.from_user.id, "uz")
    if til == "uz":
        matn = (
            "👨‍💻 <b>TOJIMATOV MAXMUDJON</b>\n\n"
            "👋 Assalomu alaykum! Men Tojimatov Maxmudjon, Najot Ta'lim o'quvchisiman.\n"
            "Ushbu bot orqali respublikamiz hududlaridagi ob-havoni oson bilib olishingiz mumkin."
        )
    else:
        matn = (
            "👨‍💻 <b>TOJIMATOV MAXMUDJON</b>\n\n"
            "👋 Hello! I am Tojimatov Maxmudjon, a student at Najot Ta'lim.\n"
            "Through this bot, you can easily check the weather across the regions of our republic."
        )
    await message.answer(matn, parse_mode="HTML")

async def main():
    print("Bot ishga tushdi...")
    await dp.start_polling(bot)

if __name__ == "__main__":
    asyncio.run(main())