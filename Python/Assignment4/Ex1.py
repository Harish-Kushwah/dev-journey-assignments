from math_operations.advanced_operations import *
from math_operations.basic_operations import *


def menu():
    print("_____Basic Operations____")
    print("1. For Addition")
    print("2. For Substraction")
    print("3. For Multiplication")
    print("4. For Division")
    print("_____Advanced Operations____")
    print("5. For power")
    print("6. For squareroot")



menu()
while True:
    x = int(input("Enter Choice :"))
    n1 = int(input("Enter Number 1 : "))
    n2 = int(input("Enter Number 2 : "))
    if x == 1:
        print("Sum : ",sum(n1,n2))
    elif x == 2:
        print("Substarction : ",sub(n1,n2)) 
    elif x == 3:
        print("Multiplication : ",mul(n1,n2)) 
    elif x == 4:
        print("Division : ",div(n1,n2)) 
    elif x == 5:
        print("Power : ",power(n1,n2)) 
    elif x == 6:
        print("Square Root  : ",square_root(n1)) 
    else:
        print("Have a nice day..!!")
        exit()




