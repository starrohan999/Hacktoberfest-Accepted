# Importing all the necessary modules
from tkinter import *
from tkinter import messagebox as mb
from pytube import YouTube

# Initializing the window
root = Tk()
root.title('AditiyaF Youtube Video Downloader')
root.geometry('700x200')
root.resizable(0, 0)
root.config(bg='Coral')

# Defining the downloader function
def downloader(link, directory, filename):
    yt_link = link.get()
    save_path = directory.get()
    aftersave_filename = filename.get()

    try:
        yt = YouTube(yt_link)
        mb.showerror(title='Error', message='Connection Error!')

        video = yt.streams.first()
        video.download(save_path, aftersave_filename)
    except:
        mb.showerror('Error', 'Connection Error! You are offline!')


def reset(l_strvar, d_strvar, fn_strvar):
    l_strvar.set('')
    d_strvar.set('')
    fn_strvar.set('')

# Heading label
Label(root, text='AditiyaF Youtube Video Downloader', font=("Comic Sans MS", 15), bg='Coral').place(relx=0.25, rely=0.0)

# Creating the main window
Label(root, text='YouTube Link:', font=("Times New Roman", 13), bg='Coral').place(relx=0.05, rely=0.2)

link_strvar = StringVar()
link_entry = Entry(root, width=50, textvariable=link_strvar)
link_entry.place(relx=0.5, rely=0.2)


Label(root, text='Enter the save location:', font=("Times New Roman", 13), bg='Coral').place(relx=0.05, rely=0.4)

dir_strvar = StringVar()
dir_entry = Entry(root, width=50, textvariable=dir_strvar)
dir_entry.place(relx=0.5, rely=0.4)


Label(root, text='Enter the filename:', font=("Times New Roman", 13), bg='Coral').place(relx=0.05, rely=0.6)

filename_strvar = StringVar()
filename_entry = Entry(root, width=50, textvariable=filename_strvar)
filename_entry.place(relx=0.5, rely=0.6)

# Creating the buttons
download_btn = Button(root, text='Download', font=7, bg='Aquamarine',
                      command=lambda: downloader(link_entry, dir_entry, filename_entry)).place(relx=0.3, rely=0.75)

reset_btn = Button(root, text='Reset', font=7, bg='Aquamarine',
                   command=lambda: reset(link_strvar, dir_strvar, filename_strvar)).place(relx=0.5, rely=0.75)

# Finalizing the window
root.update()
root.mainloop()
