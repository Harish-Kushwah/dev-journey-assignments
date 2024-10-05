class Engin():
    def __init__(self,horsepower):
        print("Horsepower :",horsepower)

class Body():
    def __init__(self,material):
        print("Material :",material)

class Car(Engin,Body):
    def __init__(self,horsepower,material):
        super().__init__(horsepower)
        Body.__init__(self,material)

thar = Car("1000 hp","Plastic")