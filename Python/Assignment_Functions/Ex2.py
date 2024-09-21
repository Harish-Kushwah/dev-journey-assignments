def sum_num(nums):
    sum = 0
    for x in nums:
        sum+=x
    return sum

def sum_n(nums):
   return sum(nums)

print(sum_num([1,2,34,45,34]))
print(sum_n([1,2,34,45,34]))