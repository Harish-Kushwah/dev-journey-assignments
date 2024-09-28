file = open("input.txt" ,"r")

reversed =""
for line in file.read():
    reversed = line + reversed
file.close()

file_revesed = open("reveresed.txt","w")
file_revesed.write(reversed)
print("content written successfully")
file_revesed.close()
