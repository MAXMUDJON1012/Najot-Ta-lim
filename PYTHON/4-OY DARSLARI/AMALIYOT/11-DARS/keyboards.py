from aiogram.types import InlineKeyboardMarkup, InlineKeyboardButton

def get_language_keyboard():
    return InlineKeyboardMarkup(
        inline_keyboard=[
            [
                InlineKeyboardButton(text="🇺🇿 O'zbek tili", callback_data="lang_uz"),
                InlineKeyboardButton(text="🇬🇧 English", callback_data="lang_en")
            ],
            [
                InlineKeyboardButton(text="🇷🇺 Русский", callback_data="lang_ru")
            ],
            [
                InlineKeyboardButton(text="👨‍💻 Dasturchi haqida", callback_data="about_dev")
            ]
        ]
    )

def get_back_keyboard():
    return InlineKeyboardMarkup(
        inline_keyboard=[
            [InlineKeyboardButton(text="🔙 Orqaga", callback_data="back_to_menu")]
        ]
    )