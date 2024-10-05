class Employee():
    def __init__(self,name,position,salary):
        self.name = name
        self.position = position
        self.salary = salary

    def display_info(self):
        print("Employee Name :",self.name)
        print("Employee Position :",self.position)
        print("Employee Salary :",self.salary)

ganesh = Employee("Ganesh","SDE","Rs.150")
ganesh.display_info()
