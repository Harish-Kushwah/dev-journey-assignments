class Vehical():
    def __init__(self,brand,speed):
        self.brand = brand
        self.speed = speed

    def show_details(self):
        print("Brand :",self.brand)
        print("Speed :",self.speed)

class Car(Vehical):
    def __init__(self,brand,speed,milage):
        super().__init__(brand,speed)
        self.milage = milage
    def show_details(self):
        super().show_details()
        print("Milage :",self.milage)



c1 = Car("Maruti","100 km/hr","30")
c1.show_details()