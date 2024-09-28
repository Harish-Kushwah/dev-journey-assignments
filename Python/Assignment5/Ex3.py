def read_file(file_name):
    file  = open(file_name,"r")
    for f in file:
        print(f)
    file.close()

def write_file(file_name):
    file = open(file_name,"w")
    content = input("Enter something to write into a file : ")
    file.write(content)
    print("Content Written Successfully")
    file.close()

def read_line_file(file_name):
    file = open(file_name,"r")
    for line in file.readline():
        print(line)
    file.close()

def write_line_file(file_name):
    file = open(file_name,"w")
    lines = input("Enter Lines ")
    file.writelines(lines)
    print("Content Written Successfully")
    file.close()

import os
def rename_file(current_file_name,new_file_name):
    os.rename(current_file_name,new_file_name)
    print("File Renamed Successfully")

file_name = "sample.txt"
new_file_name = "sample_text_file.txt"

# read_file(file_name)
# write_file(file_name)
# read_line_file(file_name)
# write_line_file(file_name)
# rename_file(file_name,new_file_name)