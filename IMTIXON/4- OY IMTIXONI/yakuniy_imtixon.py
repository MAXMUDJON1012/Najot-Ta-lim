import mysql.connector
from mysql.connector import Error
from datetime import date

def get_connection():
    try:
        connection = mysql.connector.connect(
            host="localhost",
            user="root",
            password="2005",
            database="daily_expenses_db"
        )
        return connection
    except Error as e:
        print(f"\n[Xatolik] Bazaga ulanishda muammo: {e}")
        return None

def add_expense():
    print("\n--- Yangi xarajat qo'shish ---")
    title = input("Xarajat nomi (masalan: Tushlik): ").strip()
    try:
        amount = int(input("Xarajat summasi (so'm): ").strip())
        if amount <= 0:
            print("[Xato] Summa musbat bo'lishi kerak!")
            return
    except ValueError:
        print("[Xato] Summani faqat butun son sifatida kiriting!")
        return

    category = input("Kategoriya (Oziq-ovqat, Yo'l va h.k.): ").strip()
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
            print("✅ Xarajat muvaffaqiyatli saqlandi!")
        except Error as e:
            print(f"[Xatolik] Saqlanmadi: {e}")
        finally:
            cursor.close()
            conn.close()

def view_all_expenses():
    print("\n--- Barcha xarajatlar ro'yxati ---")
    conn = get_connection()
    if conn:
        try:
            cursor = conn.cursor()
            cursor.execute("SELECT id, title, amount, category, expense_date FROM expenses")
            rows = cursor.fetchall()
            if not rows:
                print("Bazada hali xarajatlar yo'q.")
            else:
                print(f"{'ID':<4} | {'Nomi':<20} | {'Summa (so‘m)':<15} | {'Kategoriya':<15} | {'Sana'}")
                print("-" * 75)
                for row in rows:
                    print(f"{row[0]:<4} | {row[1]:<20} | {row[2]:<15,}| {row[3]:<15} | {row[4]}")
                
                cursor.execute("SELECT SUM(amount) FROM expenses")
                total = cursor.fetchone()[0] or 0
                print("-" * 75)
                print(f"💰 JAMI: {total:,} so'm")
        except Error as e:
            print(f"[Xatolik] {e}")
        finally:
            cursor.close()
            conn.close()

def search_expense():
    print("\n--- Qidiruv ---")
    search_query = input("Qidirilayotgan xarajat nomi yoki turi: ").strip()
    if not search_query:
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
                print(f"'{search_query}' bo'yicha hech narsa topilmadi.")
            else:
                print(f"{'ID':<4} | {'Nomi':<20} | {'Summa (so‘m)':<15} | {'Kategoriya':<15} | {'Sana'}")
                print("-" * 75)
                for row in rows:
                    print(f"{row[0]:<4} | {row[1]:<20} | {row[2]:<15,}| {row[3]:<15} | {row[4]}")
        except Error as e:
            print(f"[Xatolik] {e}")
        finally:
            cursor.close()
            conn.close()

def main():
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
            print("[Xato] Noto'g'ri tanlov!")

if __name__ == "__main__":
    main()