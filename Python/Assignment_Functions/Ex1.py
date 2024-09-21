def max_three(a,b,c):
    return max(max(a,b),max(b,c))

def max_three_list(a,b,c):
    return max([a,b,c])

def max_three_variabl(*a):
    return max(a)

print(max_three(1,2,4))
print(max_three_list(1,2,4))
print(max_three_variabl(1,2,4,6,23,34))