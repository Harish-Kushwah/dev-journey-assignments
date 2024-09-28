people = {
    'John':{'age':45,'city':'New York'},
    'Mike':{'age':22,'city':'Los Angels'},
    'Sarah':{'age':32,'city':'New York'},
    'Anna':{'age':28,'city':'Chicago'},
}
ans = []
for name,details in people.items():
    if details['age']>30 and details['city'] =='New York':
        ans.append(name)

print(ans)
