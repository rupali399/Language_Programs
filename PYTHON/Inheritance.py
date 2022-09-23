class students:
    
    def __init__(self, name, contact):
        self.name = name
        self.contact = contact
        
    def getdata(self):
        self.name = print("Enter name : ")
        self.contact = print("Enter contact : ")
        
    def putdata(self):
        print("The name is : ", self.name, "This is the contact : ", self.contact)
        
    class scienceStudent(students):
        def __init__(self, age):
            self.age = age
            
        def science(self):
            print("I am a student")
            
Rob = scienceStudent("blank", 20)
Rob.Science()
Rob.getdata()
Rob.putdata()
    