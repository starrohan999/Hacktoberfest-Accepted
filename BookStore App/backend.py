import sqlite3

class Database:
    #initialization function
    def __init__(self): #self => object reference
        self.conn = sqlite3.connect("bookstore.db")
        self.cur = self.conn.cursor()
        self.cur.execute("CREATE TABLE IF NOT EXISTS book (id INTEGER PRIMARY KEY, title text, author text, year integer, isbn integer)")
        self.conn.commit()

    def insert(self,title,author,year,isbn):
        self.cur.execute("INSERT INTO book VALUES (NULL,?,?,?,?)",(title,author,year,isbn))
        self.conn.commit()
        self.view()

    def view(self):
        self.cur.execute("SELECT * FROM book")
        rows= self.cur.fetchall()
        return rows

    def search(self,title="",author="",year="",isbn=""):
        self.cur.execute("SELECT * FROM book WHERE title=? OR author=? OR year=? OR isbn=?", (title,author,year,isbn))
        rows= self.cur.fetchall()
        return rows

    def delete(self,id):
        self.cur.execute("DELETE FROM book WHERE id=?",(id,))
        self.conn.commit()

    def update(self,id,title,author,year,isbn):
        self.cur.execute("UPDATE book SET title=?, author=?, year=?, isbn=? WHERE id=?",(title,author,year,isbn,id))
        self.conn.commit()
    
    def __del__(self):
        self.conn.close()

# database = Database()

# connect()
# insert("Batman Origins","Bruce Wayne",1955,7483473973)
# insert("Code Geass","lelouch Lemperouge",2001,87683473973)
# insert("The Joker","Heath Ledger",2008,327929479)
# # delete(3)
# database.insert("The moon","John Smooth",1917,99999999)
# print(database.view())
#print(search(author="John Smooth"))
