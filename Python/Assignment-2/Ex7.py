def multipy(a,*args):
    pr = a
    for num in args:
        pr*=num
    return pr

print("Product is ",multipy(2,3,4))