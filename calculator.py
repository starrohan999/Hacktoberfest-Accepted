from tkinter import *
from tkinter import font as tkfont
root=Tk()
font_1=tkfont.Font(family='Helvetica',size=12,weight='normal')
font_2=tkfont.Font(family='Helvetica',size=20,weight='normal')
root.title("Calculator")
root.iconphoto(False, PhotoImage(file='images/calculator-icon-png-28.png'))
num_1=0
inp=''
def click(number):
     tmp=str(x.get())
     x.delete(0,END)
     x.insert(0,tmp+str(number))
def clear():
     x.delete(0,END)
def add():
     global num_1
     global inp
     if(x.get()!=''):
          num_1=x.get()
     inp='add'
     x.delete(0,END)
def sub():
     global num_1
     global inp
     if(x.get()!=''):
          num_1=x.get()
     inp='sub'
     x.delete(0,END)
def prod():
     global num_1
     global inp
     if(x.get()!=''):
          num_1=x.get()
     inp='prod'
     x.delete(0,END)
def div():
     global num_1
     global inp
     if(x.get()!=''):
          num_1=x.get()
     inp='div'
     x.delete(0,END)
def final():
     num_2=x.get()
     x.delete(0,END)
     if(inp=='add'):
          x.insert(0,float(num_1)+float(num_2))
     elif(inp=='sub'):
          x.insert(0,float(num_1)-float(num_2))
     elif(inp=='prod'):
          x.insert(0,float(num_1)*float(num_2))
     elif(inp=='div'):
          x.insert(0,float(num_1)/float(num_2))

x=Entry(root,width=20,borderwidth=5,font=font_2)
x.grid(row=1,column=1,columnspan=4,pady=10)

     
button_1=Button(root,text='1',font=font_1,padx=20,pady=20,command=lambda: click(1),bg='blue',fg='white').grid(row=2,column=1)
button_2=Button(root,text='2',font=font_1,padx=20,pady=20,command=lambda: click(2),bg='blue',fg='white').grid(row=2,column=2)
button_3=Button(root,text='3',font=font_1,padx=20,pady=20,command=lambda: click(3),bg='blue',fg='white').grid(row=2,column=3)
button_4=Button(root,text='4',font=font_1,padx=20,pady=20,command=lambda: click(4),bg='blue',fg='white').grid(row=3,column=1)
button_5=Button(root,text='5',font=font_1,padx=20,pady=20,command=lambda: click(5),bg='blue',fg='white').grid(row=3,column=2)
button_6=Button(root,text='6',font=font_1,padx=20,pady=20,command=lambda: click(6),bg='blue',fg='white').grid(row=3,column=3)
button_7=Button(root,text='7',font=font_1,padx=20,pady=20,command=lambda: click(7),bg='blue',fg='white').grid(row=4,column=1)
button_8=Button(root,text='8',font=font_1,padx=20,pady=20,command=lambda: click(8),bg='blue',fg='white').grid(row=4,column=2)
button_9=Button(root,text='9',font=font_1,padx=20,pady=20,command=lambda: click(9),bg='blue',fg='white').grid(row=4,column=3)
button_0=Button(root,text='0',font=font_1,padx=20,pady=20,command=lambda: click(0),bg='blue',fg='white').grid(row=5,column=1)
button_dot=Button(root,text='.',font=font_1,padx=22,pady=21,command=lambda: click('.'),bg='blue',fg='white').grid(row=6,column=1)
button_add=Button(root,text='+',font=font_1,padx=19,pady=20,command=add,bg='blue',fg='white').grid(row=2,column=4)
button_sub=Button(root,text='-',font=font_1,padx=21,pady=20,command=sub,bg='blue',fg='white').grid(row=3,column=4)
button_prod=Button(root,text='x',font=font_1,padx=20,pady=20,command=prod,bg='blue',fg='white').grid(row=4,column=4)
button_div=Button(root,text='/',font=font_1,padx=21,pady=20,command=div,bg='blue',fg='white').grid(row=5,column=4)
button_clear=Button(root,text='clear',font=font_1,padx=60,pady=20,command=clear,bg='blue',fg='white').grid(row=6,column=2,columnspan=3)
button_final=Button(root,text='=',font=font_1,padx=40,pady=20,command=final,bg='blue',fg='white').grid(row=5,column=2,columnspan=2)

root.mainloop()
