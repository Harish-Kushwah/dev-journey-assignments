def sum(*arr):
    s = 0
    for num in arr:
        s+=num
    return s

print("Sum is :",sum(1,2,3,4,8))