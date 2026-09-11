from deep_translator import GoogleTranslator

# Foydalanuvchilar tanlagan tillarni xotirada saqlash (user_id: lang_code)
user_selected_lang = {}

# Tillar ro'yxati
LANGUAGES = {
    "uz": "🇺🇿 O'zbek tili",
    "en": "🇬🇧 English",
    "ru": "🇷🇺 Русский"
}

def set_user_language(user_id: int, lang_code: str):
    """Foydalanuvchi tanlagan tilni saqlash"""
    user_selected_lang[user_id] = lang_code

def get_user_language(user_id: int) -> str:
    """Foydalanuvchi tanlagan tilni olish (standart holatda 'uz')"""
    return user_selected_lang.get(user_id, "uz")

def translate_text(text: str, target_lang: str) -> str:
    """Matnni avtomatik aniqlab, tanlangan tilga tarjima qilish"""
    return GoogleTranslator(source="auto", target=target_lang).translate(text)