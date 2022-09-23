class students:
    

    def __init__(self, name, contact) :

        self.name = name
        self.contact = contact
        

    def getdata(self):

        print("Accepting data")
        self.name = print("Enter your name : ")
        self.contact = print("Enter contact : ")
        

    def putdata(self):
        print("The name is : ", self.name)
        print("This is the contact ", self.contact)
        

John = students("blank", 0)

John.getdata()

John.putdata()