number1 = int(input("Enter Number 1 :"))
number2 = int(input("Enter Number 2 :"))
operator = input("Enter operator :")

if operator == "+":
    result = number1 + number2
elif operator == "-":
    result = number1 - number2
elif operator == "*":
    result = number1 * number2
elif operator == "/":
    result = number1 / number2
elif operator == "%":
    result = number1 % number2
elif operator == "**":
    result = number1 ** number2
elif operator == "//":
    result = number1 // number2

print(number1 ,operator, number2,"=",result )