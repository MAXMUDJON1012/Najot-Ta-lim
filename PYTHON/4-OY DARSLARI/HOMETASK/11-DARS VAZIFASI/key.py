from aiogram.types import ReplyKeyboardMarkup, KeyboardButton, InlineKeyboardMarkup, InlineKeyboardButton

# Viloyatlar va Tumanlar bazasi
VILOYATLAR = {
    "Andijon": ["Andijon", "Asaka", "Shahrixon"],
    "Buxoro": ["Buxoro", "G'ijduvon", "Qorako'l"],
    "Farg'ona": ["Farg'ona", "Qo'qon", "Marg'ilon", "Rishton"],
    "Jizzax": ["Jizzax", "Zomin", "G'allaorol"],
    "Xorazm": ["Urganch", "Xiva", "Xonqa"],
    "Namangan": ["Namangan", "Chust", "Kosonsoy"],
    "Navoiy": ["Navoiy", "Zarafshon", "Nurota"],
    "Qashqadaryo": ["Qarshi", "Shahrisabz", "Kitob"],
    "Samarqand": ["Samarqand", "Urgut", "Kattaqo'rg'on"],
    "Sirdaryo": ["Guliston", "Yangiyer", "Sirdaryo"],
    "Surxondaryo": ["Termiz", "Denov", "Sherobod"],
    "Toshkent": ["Toshkent", "Chirchiq", "Angren", "Nurafshon"]
}

def til_tanlash():
    return InlineKeyboardMarkup(
        inline_keyboard=[
            [InlineKeyboardButton(text="🇺🇿 O'zbekcha", callback_data="lang_uz"),
             InlineKeyboardButton(text="🇬🇧 English", callback_data="lang_en")]
        ]
    )

def asosiy_menu(til="uz"):
    matnlar = {
        "uz": {"ob_havo": "🌤 Ob-havoni bilish", "dasturchi": "👨‍💻 Dasturchi haqida", "til": "🌐 Tilni o'zgartirish"},
        "en": {"ob_havo": "🌤 Get Weather", "dasturchi": "👨‍💻 About Developer", "til": "🌐 Change Language"}
    }
    
    return ReplyKeyboardMarkup(
        keyboard=[
            [KeyboardButton(text=matnlar[til]["ob_havo"])],
            [KeyboardButton(text=matnlar[til]["dasturchi"]), KeyboardButton(text=matnlar[til]["til"])]
        ],
        resize_keyboard=True
    )

def viloyatlar_tugmalari(til="uz"):
    inline_kb = []
    row = []
    for v in VILOYATLAR.keys():
        row.append(InlineKeyboardButton(text=v, callback_data=f"region_{v}"))
        if len(row) == 2:
            inline_kb.append(row)
            row = []
    if row:
        inline_kb.append(row)
    
    orqaga = "❌ Yopish" if til == "uz" else "❌ Close"
    inline_kb.append([InlineKeyboardButton(text=orqaga, callback_data="close_menu")])
    return InlineKeyboardMarkup(inline_keyboard=inline_kb)

def tumanlar_tugmalari(viloyat_nomi, til="uz"):
    tumanlar = VILOYATLAR.get(viloyat_nomi, [])
    inline_kb = []
    row = []
    for t in tumanlar:
        row.append(InlineKeyboardButton(text=t, callback_data=f"dist_{t}"))
        if len(row) == 2:
            inline_kb.append(row)
            row = []
    if row:
        inline_kb.append(row)
    
    orqaga = "🔙 Viloyatlarga qaytish" if til == "uz" else "🔙 Back to Regions"
    inline_kb.append([InlineKeyboardButton(text=orqaga, callback_data="back_to_regions")])
    return InlineKeyboardMarkup(inline_keyboard=inline_kb)

def orqaga_tumanlarga(viloyat_nomi, til="uz"):
    orqaga = "🔙 Tumanlarga qaytish" if til == "uz" else "🔙 Back to Districts"
    return InlineKeyboardMarkup(inline_keyboard=[
        [InlineKeyboardButton(text=orqaga, callback_data=f"region_{viloyat_nomi}")]
    ])

def viloyatni_top(tuman_nomi):
    for reg, tumanlar in VILOYATLAR.items():
        if tuman_nomi in tumanlar:
            return reg
    return "Toshkent"