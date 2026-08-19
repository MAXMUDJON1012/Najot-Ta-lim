import asyncio
import mysql.connector
from mysql.connector import Error
from datetime import date

from aiogram import Bot, Dispatcher, Router, F
from aiogram.filters import CommandStart
from aiogram.types import Message, ReplyKeyboardMarkup, KeyboardButton
from aiogram.fsm.context import FSMContext
from aiogram.fsm.state import State, StatesGroup
from aiogram.fsm.storage.memory import MemoryStorage

BOT_TOKEN = "8829400282:AAHwhDOOsl3REmwak8zP-Kjis0vi-m-R7G0"

DB_CONFIG = {
    "host": "localhost",
    "user": "root",
    "password": "2005",
    "database": "daily_expenses_db"
}

bot = Bot(token=BOT_TOKEN)
dp = Dispatcher(storage=MemoryStorage())
router = Router()
dp.include_router(router)

class ExpenseState(StatesGroup):
    waiting_for_title = State()
    waiting_for_amount = State()
    waiting_for_category = State()

class SearchState(StatesGroup):
    waiting_for_query = State()

def get_connection():
    try:
        return mysql.connector.connect(**DB_CONFIG)
    except Error:
        return None

def main_menu():
    return ReplyKeyboardMarkup(
        keyboard=[
            [KeyboardButton(text="➕ Yangi xarajat qo'shish")],
            [KeyboardButton(text="📋 Barcha xarajatlar"), KeyboardButton(text="🔍 Qidirish")],
            [KeyboardButton(text="📊 Jami hisobot")]
        ],
        resize_keyboard=True
    )

@router.message(CommandStart())
async def start_handler(message: Message, state: FSMContext):
    await state.clear()
    await message.answer(
        f"👋 Assalomu alaykum, <b>{message.from_user.first_name}</b>!\n\n"
        f"💰 <b>Kunlik Xarajatlar</b> botiga xush kelibsiz.\n"
        f"Quyidagi menyudan kerakli bo'limni tanlang 👇",
        parse_mode="HTML",
        reply_markup=main_menu()
    )

@router.message(F.text == "📋 Barcha xarajatlar")
async def view_all(message: Message):
    conn = get_connection()
    if not conn:
        await message.answer("⚠️ Ma'lumotlar bazasiga ulanib bo'lmadi.")
        return

    try:
        cursor = conn.cursor()
        cursor.execute("SELECT id, title, amount, category, expense_date FROM expenses ORDER BY id ASC")
        rows = cursor.fetchall()

        if not rows:
            await message.answer("📂 Bazada hali hech qanday xarajat mavjud emas.")
            return

        cursor.execute("SELECT SUM(amount) FROM expenses")
        total = cursor.fetchone()[0] or 0

        javob = "📋 <b>BARCHA XARAJATLAR RO'YXATI:</b>\n\n"
        for r in rows:
            javob += f"🔹 <b>#{r[0]} | {r[1]}</b>\n"
            javob += f"   💵 Summa: <b>{r[2]:,}</b> so'm\n"
            javob += f"   🏷 Kategoriya: {r[3]}\n"
            javob += f"   📅 Sana: {r[4]}\n\n"

        javob += f"➖➖➖➖➖➖➖➖➖➖\n💰 <b>JAMI XARAJAT: {total:,} so'm</b>"
        await message.answer(javob, parse_mode="HTML")
    except Error as e:
        await message.answer(f"Xatolik yuz berdi: {e}")
    finally:
        cursor.close()
        conn.close()

@router.message(F.text == "📊 Jami hisobot")
async def summary_report(message: Message):
    conn = get_connection()
    if not conn:
        await message.answer("⚠️ Ma'lumotlar bazasiga ulanib bo'lmadi.")
        return

    try:
        cursor = conn.cursor()
        cursor.execute("SELECT COUNT(*), SUM(amount), AVG(amount), MAX(amount), MIN(amount) FROM expenses")
        stat = cursor.fetchone()

        total_count = stat[0] or 0
        total_sum = stat[1] or 0
        avg_sum = int(stat[2] or 0)
        max_sum = stat[3] or 0
        min_sum = stat[4] or 0

        matn = (
            f"📊 <b>UMUMIY XARAJATLAR STATISTIKASI:</b>\n\n"
            f"🔢 Jami yozuvlar soni: <b>{total_count} ta</b>\n"
            f"💰 Jami sarflangan summa: <b>{total_sum:,} so'm</b>\n"
            f"📈 O'rtacha xarajat: <b>{avg_sum:,} so'm</b>\n"
            f"🔺 Eng katta xarajat: <b>{max_sum:,} so'm</b>\n"
            f"🔻 Eng kichik xarajat: <b>{min_sum:,} so'm</b>"
        )
        await message.answer(matn, parse_mode="HTML")
    except Error as e:
        await message.answer(f"Xatolik yuz berdi: {e}")
    finally:
        cursor.close()
        conn.close()

@router.message(F.text == "➕ Yangi xarajat qo'shish")
async def add_expense_start(message: Message, state: FSMContext):
    await state.set_state(ExpenseState.waiting_for_title)
    await message.answer("✍️ Xarajat nomini kiriting (masalan: <i>Tushlik</i>):", parse_mode="HTML")

@router.message(ExpenseState.waiting_for_title)
async def process_title(message: Message, state: FSMContext):
    await state.update_data(title=message.text.strip())
    await state.set_state(ExpenseState.waiting_for_amount)
    await message.answer("💵 Xarajat summasini kiriting (faqat butun son, masalan: <i>45000</i>):", parse_mode="HTML")

@router.message(ExpenseState.waiting_for_amount)
async def process_amount(message: Message, state: FSMContext):
    if not message.text.isdigit():
        await message.answer("⚠️ Iltimos, faqat raqamlardan iborat summa kiriting:")
        return

    amount = int(message.text)
    if amount <= 0:
        await message.answer("⚠️ Summa 0 dan katta bo'lishi kerak:")
        return

    await state.update_data(amount=amount)
    await state.set_state(ExpenseState.waiting_for_category)
    await message.answer("🏷 Kategoriyani kiriting (masalan: <i>Oziq-ovqat, Transport, Kommunal</i>):", parse_mode="HTML")

@router.message(ExpenseState.waiting_for_category)
async def process_category(message: Message, state: FSMContext):
    category = message.text.strip()
    data = await state.get_data()
    title = data["title"]
    amount = data["amount"]
    today_date = str(date.today())

    conn = get_connection()
    if conn:
        try:
            cursor = conn.cursor()
            query = "INSERT INTO expenses (title, amount, category, expense_date) VALUES (%s, %s, %s, %s)"
            cursor.execute(query, (title, amount, category, today_date))
            conn.commit()
            await message.answer(
                f"✅ <b>Xarajat bazaga saqlandi!</b>\n\n"
                f"📌 Nomi: {title}\n"
                f"💵 Summasi: {amount:,} so'm\n"
                f"🏷 Kategoriya: {category}\n"
                f"📅 Sana: {today_date}",
                parse_mode="HTML",
                reply_markup=main_menu()
            )
        except Error as e:
            await message.answer(f"❌ Xatolik yuz berdi: {e}", reply_markup=main_menu())
        finally:
            cursor.close()
            conn.close()

    await state.clear()

@router.message(F.text == "🔍 Qidirish")
async def search_start(message: Message, state: FSMContext):
    await state.set_state(SearchState.waiting_for_query)
    await message.answer("🔎 Qidirilayotgan xarajat nomi yoki kategoriyasini yozing:")

@router.message(SearchState.waiting_for_query)
async def search_process(message: Message, state: FSMContext):
    search_query = message.text.strip()
    conn = get_connection()
    if conn:
        try:
            cursor = conn.cursor()
            query = "SELECT id, title, amount, category, expense_date FROM expenses WHERE title LIKE %s OR category LIKE %s"
            param = f"%{search_query}%"
            cursor.execute(query, (param, param))
            rows = cursor.fetchall()

            if not rows:
                await message.answer(f"🔍 '<i>{search_query}</i>' bo'yicha hech qanday xarajat topilmadi.", parse_mode="HTML", reply_markup=main_menu())
            else:
                javob = f"🔍 <b>Topilgan natijalar ({len(rows)} ta):</b>\n\n"
                subtotal = 0
                for r in rows:
                    subtotal += r[2]
                    javob += f"🔹 <b>#{r[0]} | {r[1]}</b> — {r[2]:,} so'm ({r[3]})\n"

                javob += f"\n📊 <b>Qidiruv bo'yicha jami: {subtotal:,} so'm</b>"
                await message.answer(javob, parse_mode="HTML", reply_markup=main_menu())
        except Error as e:
            await message.answer(f"Xatolik: {e}", reply_markup=main_menu())
        finally:
            cursor.close()
            conn.close()

    await state.clear()

async def main():
    await dp.start_polling(bot)

if __name__ == "__main__":
    asyncio.run(main())