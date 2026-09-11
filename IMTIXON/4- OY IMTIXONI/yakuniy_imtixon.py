import mysql.connector
from mysql.connector import Error
from datetime import date

# 1. Baza ulanish sozlamalari
DB_CONFIG = {
    "host": "localhost",
    "user": "root",
    "password": "2005",  # Sizning parolingiz
    "database": "daily_expenses_db"
}

def get_connection():
    """MySQL bazasiga ulanish funksiyasi"""
    try:
        connection = mysql.connector.connect(**DB_CONFIG)
        return connection
    except Error as e:
        print(f"\n[Xatolik] Bazaga ulanishda muammo: {e}")
        return None

def add_expense():
    """5-shart: Yangi xarajat qo'shish (INSERT)"""
    print("\n--- Yangi xarajat qo'shish ---")
    title = input("Xarajat nomi (masalan: Tushlik): ").strip()
    
    try:
        amount = int(input("Summasi (so'm): ").strip())
        if amount <= 0:
            print("[Xato] Summa musbat son bo'lishi kerak!")
            return
    except ValueError:
        print("[Xato] Summani faqat butun son sifatida kiriting!")
        return

    category = input("Kategoriya (Oziq-ovqat, Transport va h.k.): ").strip()
    if not category:
        category = "Boshqa"

    expense_date = input("Sana (YYYY-MM-DD, bo'sh qolsa bugun): ").strip()
    if not expense_date:
        expense_date = str(date.today())

    if not title:
        print("[Xato] Nomi kiritilishi shart!")
        return

    conn = get_connection()
    if conn:
        try:
            cursor = conn.cursor()
            query = "INSERT INTO expenses (title, amount, category, expense_date) VALUES (%s, %s, %s, %s)"
            cursor.execute(query, (title, amount, category, expense_date))
            conn.commit()
            print(f"✅ '{title}' xarajati saqlandi!")
        except Error as e:
            print(f"[Xatolik] Saqlanmadi: {e}")
        finally:
            cursor.close()
            conn.close()

def view_all_expenses():
    """6-shart: Barcha xarajatlar va jami summani chiqarish (SELECT & SUM)"""
    print("\n--- Barcha xarajatlar ro'yxati ---")
    conn = get_connection()
    if conn:
        try:
            cursor = conn.cursor()
            cursor.execute("SELECT id, title, amount, category, expense_date FROM expenses")
            rows = cursor.fetchall()
            
            if not rows:
                print("Bazada hali xarajatlar mavjud emas.")
            else:
                print(f"{'ID':<4} | {'Nomi':<22} | {'Summa (so‘m)':<15} | {'Kategoriya':<15} | {'Sana'}")
                print("-" * 75)
                for row in rows:
                    print(f"{row[0]:<4} | {row[1]:<22} | {row[2]:<15,}| {row[3]:<15} | {row[4]}")
                
                cursor.execute("SELECT SUM(amount) FROM expenses")
                total = cursor.fetchone()[0] or 0
                print("-" * 75)
                print(f"💰 JAMI XARAJAT: {total:,} so'm")
        except Error as e:
            print(f"[Xatolik] O'qishda xato: {e}")
        finally:
            cursor.close()
            conn.close()

def search_expense():
    """7-shart: Nom yoki kategoriya bo'yicha qidirish (WHERE ... LIKE)"""
    print("\n--- Xarajat qidirish ---")
    search_query = input("Qidirilayotgan so'z: ").strip()
    if not search_query:
        print("[Xato] Qidiruv so'zi kiritilmadi!")
        return

    conn = get_connection()
    if conn:
        try:
            cursor = conn.cursor()
            query = "SELECT id, title, amount, category, expense_date FROM expenses WHERE title LIKE %s OR category LIKE %s"
            param = f"%{search_query}%"
            cursor.execute(query, (param, param))
            rows = cursor.fetchall()
            
            if not rows:
                print(f"'{search_query}' bo'yicha ma'lumot topilmadi.")
            else:
                print(f"\nTopilgan natijalar ({len(rows)} ta):")
                print(f"{'ID':<4} | {'Nomi':<22} | {'Summa (so‘m)':<15} | {'Kategoriya':<15} | {'Sana'}")
                print("-" * 75)
                subtotal = 0
                for row in rows:
                    subtotal += row[2]
                    print(f"{row[0]:<4} | {row[1]:<22} | {row[2]:<15,}| {row[3]:<15} | {row[4]}")
                print("-" * 75)
                print(f"Qidiruv bo'yicha jami: {subtotal:,} so'm")
        except Error as e:
            print(f"[Xatolik] Qidiruvda xato: {e}")
        finally:
            cursor.close()
            conn.close()

def main():
    """8, 9, 10-shartlar: Menyu va dasturni to'xtatish"""
    while True:
        print("\n===== MENU =====")
        print("1. Ma'lumot qo'shish")
        print("2. Ma'lumotlarni ko'rish")
        print("3. Ma'lumot qidirish")
        print("0. Chiqish")
        
        tanlov = input("Tanlang: ").strip()

        if tanlov == "1":
            add_expense()
        elif tanlov == "2":
            view_all_expenses()
        elif tanlov == "3":
            search_expense()
        elif tanlov == "0":
            print("\nDastur yakunlandi. Xayr!")
            break
        else:
            print("[Xato] Noto'g'ri tanlov! 0, 1, 2 yoki 3 ni tanlang.")

if __name__ == "__main__":
    main()