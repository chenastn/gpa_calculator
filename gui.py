# implement tkinter as project gui
import tkinter
import customtkinter

def startCalculate():
    # Placeholder function for the button command
    print("Calculating GPA...")

window = customtkinter.CTk()

# window frame
window.title("GPA Calculator")
window.geometry('720x480') # sets ('width x height')

# UI elements
textbox = customtkinter.CTkLabel(window, text = 'Course Title:')
textbox.pack(padx = 10, pady = 10)

course_var = tkinter.StringVar()
course = customtkinter.CTkEntry(window, width = 80, height = 40, textvariable = course_var)
course.pack(padx = 10, pady = 10)

calculate = customtkinter.CTkButton(window, text = "Calculate", command = startCalculate)
calculate.pack(padx = 10, pady = 10)

# executes tkinter
window.mainloop()