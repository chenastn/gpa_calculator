import tkinter as tk

def startCalculate():
    print("Calculating GPA...")

# Create the main window
window = tk.Tk()

# Window frame settings
window.title("GPA Calculator")
window.geometry('720x480')  # Set window size ('width x height')

# UI elements
textbox = tk.Label(window, text='Course Title:')
textbox.pack(padx=10, pady=10)

course_var = tk.StringVar()
course = tk.Entry(window, textvariable=course_var)
course.pack(padx=10, pady=10)

calculate = tk.Button(window, text="Calculate", command=startCalculate)
calculate.pack(padx=10, pady=10)

# Execute tkinter main loop
window.mainloop()
