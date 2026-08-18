from deep_translator import GoogleTranslator

def translate_text(text: str, target_lang: str) -> str:
    try:
        return GoogleTranslator(source="auto", target=target_lang).translate(text)
    except Exception:
        return "Tarjima jarayonida xatolik yuz berdi. Qaytadan urinib ko'ring."