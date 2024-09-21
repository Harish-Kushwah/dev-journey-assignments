def multi(nums):
    pr = 1
    for x in nums:
        pr*=x
    return pr

print(multi([1,2,34,45,34]))