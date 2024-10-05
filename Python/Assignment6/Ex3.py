class Animal():
    def speek(self):
        print("Animal Sound")

class Dog(Animal):
    def speek(self):
        print("Dog Bark")

class Cat(Animal):
    def speek(self):
        print("Cat Meaw")

d1 = Dog()
d1.speek()

d2 = Cat()
d2.speek()
    
