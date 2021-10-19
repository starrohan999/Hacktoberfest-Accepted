class Person:
    def __init__(self, fname, address, phone):
        self.fname=fname
        self.address=address
        self.phone=phone

    def displayperson(self):
        print("Full Name: "+self.fname)
        print("Address: "+self.address)
        print("Phone Number: "+self.phone)

class Student(Person):
    def __init__(self, fname, address, phone, sem1, sem2, roll):
        super().__init__(fname, address, phone )
        self.rollno=roll
        self.firstsemester=sem1
        self.secondsemester=sem2

    def displaystudent(self):
        print("Full Name: "+self.fname)
        print("Address: "+self.address)
        print("Phone Number: "+self.phone)
        print("Roll Number: "+self.rollno)
        print("First Semester Total Marks: "+self.firstsemester)
        print("Second Semester Total Marks: "+self.secondsemester)

class Sports:
    def __init__(self, sportsmarks):
        sportsmarks=int(sportsmarks)
        if sportsmarks>10 or sportsmarks<0:
            sportsmarks="invaild"
        elif sportsmarks<=10 and sportsmarks>=8:
            sportsmarks="A"
        elif sportsmarks<8 and sportsmarks>=6:
            sportsmarks="B"
        elif sportsmarks<6 and sportsmarks>=4:
            sportsmarks="C"
        else:
            sportsmarks="D"
        self.sportsmarks=sportsmarks

    def displaysports(self):
        print("Sports Grade: "+self.sportsmarks)

class Result(Student,Sports):
    def __init__(self, fname, address, phone, sem1, sem2, roll, sportsmarks):
        Student.__init__(self, fname, address, phone, sem1, sem2, roll)
        Sports.__init__(self, sportsmarks)

    def displayresult(self):
        print("Full Name: "+self.fname)
        print("Address: "+self.address)
        print("Phone Number: "+self.phone)
        print("Roll Number: "+self.rollno)
        print("First Semester Total Marks: "+self.firstsemester)
        print("Second Semester Total Marks: "+self.secondsemester)
        print("Sports Grade: "+self.sportsmarks)
     
fname=input("Please enter your Full Name: ")
address=input("Please enter your Address: ")
phone=input("Please enter your Phone Number: ")
sem1=input("Please enter your First Semester Total Marks: ")
sem2=input("Please enter your Second Semester Total Marks: ")
roll=input("Please enter your Roll Number: ")
sportsmarks=input("Please enter your Sports Marks: ")

# a=Person(fname,address,phone)
# a.displayperson()

# b=Student(fname, address, phone, sem1, sem2, roll)
# b.displaystudent()

# c=Sports(sportsmarks)
# c.displaysports()

d=Result(fname, address, phone, sem1, sem2, roll, sportsmarks)
d.displayresult()




