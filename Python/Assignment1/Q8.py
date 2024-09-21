temperature = float(input("Enter temperature: "))
type_of_temp = input("Enter type:(C or F): ")

if type_of_temp == "C":
    farenhite = (temperature * (9/5)) + 32
    print("Temperature in farhenhite : " , farenhite)
else :
    celcius = (temperature - 32 )*(5/9)  
    print("Temperature in celcius : " , celcius)