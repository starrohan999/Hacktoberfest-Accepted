from tkinter import *
from tkinter.ttk import *
from backend import Database

db = Database() # Object Instantiation

def get_selected_row(event):
    try:
        # variable accessible to all the functions
        global selected_tuple
        # get currently selected items index
        index=list1.curselection()[0]
        # get currently selected items value using get
        selected_tuple=list1.get(index)
        # displaying value in the fields
        e1.delete(0,END)
        e1.insert(END,selected_tuple[1])
        e2.delete(0,END)
        e2.insert(END,selected_tuple[2])
        e3.delete(0,END)
        e3.insert(END,selected_tuple[3])
        e4.delete(0,END)
        e4.insert(END,selected_tuple[4])
    except:
        pass
    
def view_command():
    list1.delete(0,END)
    for row in db.view():
        list1.insert(END,row)

def search_command():
    list1.delete(0,END)
    for row in db.search(title_text.get(),author_text.get(),year_text.get(),isbn_text.get()):
        list1.insert(END,row)

def add_command():
    db.insert(title_text.get(),author_text.get(),year_text.get(),isbn_text.get())
    list1.delete(0,END)
    list1.insert(END,(title_text.get(),author_text.get(),year_text.get(),isbn_text.get()))

def delete_command():
    db.delete(selected_tuple[0])

def update_command():
    db.update(selected_tuple[0],title_text.get(),author_text.get(),year_text.get(),isbn_text.get())

window=Tk()

window.wm_title("BookStore App")
# window.geometry('350x300+400+200')
window.resizable(height=FALSE,width=FALSE)
p1 = PhotoImage(file = 'books-icon.png')
window.iconphoto(False, p1)
# window.iconbitmap(window.wm_iconbitmap('book.ico'))

l1=Label(window,text="Title")
l1.grid(row = 0, column = 0, padx=2, pady=5)

l2=Label(window,text="Author")
l2.grid(row = 0, column = 2, padx=2, pady=5)

l3=Label(window,text="Year")
l3.grid(row = 1, column = 0, padx=2, pady=5)

l4=Label(window,text="ISBN")
l4.grid(row = 1, column = 2, padx=2, pady=5)

title_text=StringVar()
e1 = Entry(window, textvariable=title_text)
e1.grid(row = 0, column = 1, sticky=E, padx=5, pady=5)

author_text=StringVar()
e2=Entry(window,textvariable=author_text)
e2.grid(row = 0, column = 3, sticky=E, padx=5, pady=5)

year_text=StringVar()
e3=Entry(window,textvariable=year_text)
e3.grid(row=1,column=1, sticky=E, padx=5, pady=5)

isbn_text=StringVar()
e4=Entry(window,textvariable=isbn_text)
e4.grid(row=1,column=3, sticky=E, padx=5, pady=5)

list1=Listbox(window, height=9,width=40)
list1.grid(row=2,column=0,rowspan=6,columnspan=2)

sb1=Scrollbar(window)
sb1.grid(row=3,column=2,rowspan=8)

list1.configure(yscrollcommand=sb1.set)
sb1.configure(command=list1.yview)

list1.bind('<<ListboxSelect>>',get_selected_row)

b1=Button(window,text="View all", width=20,command=view_command)
b1.grid(row=2,column=3, columnspan=2, sticky=E, padx=5, pady=5)

b2=Button(window,text="Search entry", width=20,command=search_command)
b2.grid(row=3,column=3, sticky=E, padx=5, pady=5)

b3=Button(window,text="Add entry", width=20,command=add_command)
b3.grid(row=4,column=3, sticky=E, padx=5, pady=5)

b4=Button(window,text="Update item", width=20,command=update_command)
b4.grid(row=5,column=3, sticky=E, padx=5, pady=5)

b5=Button(window,text="Delete item", width=20,command=delete_command)
b5.grid(row=6,column=3, sticky=E, padx=5, pady=5)

b6=Button(window,text="Close", width=20, command=window.destroy)
b6.grid(row = 7, column=3, sticky=E, padx=5, pady=5)

window.mainloop()
