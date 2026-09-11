from aiogram.types import InlineKeyboardMarkup, InlineKeyboardButton

def get_language_keyboard() -> InlineKeyboardMarkup:
    """Til tanlash uchun inline tugmalar paneli"""
    keyboard = InlineKeyboardMarkup(
        inline_keyboard=[
            [
                InlineKeyboardButton(text="🇺🇿 O'zbek tili", callback_data="lang_uz"),
                InlineKeyboardButton(text="🇬🇧 English", callback_data="lang_en")
            ],
            [
                InlineKeyboardButton(text="🇷🇺 Русский", callback_data="lang_ru")
            ]
        ]
    )
    return keyboard