# implement tkinter as project gui
import tkinter
import customtkinter

window = customtkinter.CTk()

# window frame
window.title("GPA Calculator")
window.geometry('720x480') # sets ('width x height')

# UI elements
textbox = customtkinter.CTkEntry(window, text = 'Course Title:')
textbox.pack(padx = 10, pady = 10)
 
# executes Tkinter
window.mainloop()