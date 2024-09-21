employee_data = ('John','Doe',34,'Developer','New York')

(first_name,last_name,age,job_roll,city) = employee_data

if job_roll == 'Developer':
    print("Developer Present in tuple")
else:
    print("Developer ss not present in tuple")

employee_data_list = list(employee_data)
employee_data_list.append('Full-time')

employee_data = tuple(employee_data_list)
print("Employee Details Ater New Info : ",employee_data)