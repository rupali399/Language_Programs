from tkinter import * 
root = Tk()

def doSomething():
    print("You Clicked Button")
    
button1 = Button(root, text = "Click Here", fg = "Red", command = doSomething())
button1.pack()

root.mainloop()