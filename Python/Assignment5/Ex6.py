def copy_file(source_file_name,destination_file_name):
    source_file = open(source_file_name,"r")
    destination_file = open(destination_file_name,"w")
    destination_file.write(source_file.read())

    source_file.close()
    destination_file.close()

    print(f"File {source_file_name} copied to file {destination_file_name} successfully")

source_file_name = input("Enter source file name :")
destination_file_name = input("Enter destination file name :")

copy_file(source_file_name,destination_file_name)