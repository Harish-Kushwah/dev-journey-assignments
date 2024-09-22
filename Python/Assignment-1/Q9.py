weight = float(input("Enter Weight :"))
height = float(input("Enter height :"))

BMI = weight/(height**2)

if BMI <18.5:
    print("Under weight")
elif BMI >= 18.5 and BMI<= 24.9:
    print("Normal Weight")
elif BMI >= 25 and BMI<= 29.9:
    print("Over Weight")
elif BMI >= 30 and BMI<= 39.9:
    print("Obeses")
else:
    print("Severely Obese")
