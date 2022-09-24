from tkinter import *

class Mybuttons():
    
    def __init__(self, rootone):
        frame = Frame(rootone)
        frame.pack()
        
        self.printbutton = Button(rootone, text = "Click Here", command = self.printmessage())
        self.printbutton.pack()
        
        self.quitbutton = Button(rootone, text = "Exit", command = frame.quit)
        self.quitbutton.pack(side = RIGHT)
        
    def printmessage(self):
        print("Button Clicked")

root = Tk()

b = Mybuttons(root)

root.mainloop()