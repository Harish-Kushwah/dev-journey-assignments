student_grades = {
    'Ram':85,
    'Sham':92,
    'Ojas':88,
    'Anay':79
}
def get_max_student_record():
    max = -1
    for k,v in student_grades.items():
        if v>max:
            max = v
            ans = [k,v]
    return ans


print("Max Studet Details : ", get_max_student_record())

print("New Student Details Added")
student_grades['Eve'] = 95

print("Max Studet Details : ", get_max_student_record())

for name in sorted(student_grades.keys()):
    print("[",name,",",student_grades.get(name),"]")
