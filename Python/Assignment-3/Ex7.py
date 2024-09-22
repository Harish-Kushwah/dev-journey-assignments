# without using the map
def add_list(l1,l2):
    ans = []
    for i in range(0,len(l1)):
        ans.append(l1[i]+l2[i])
    return ans

 
print(add_list([1,2],[3,4]))

# using the map function
print(list(map(lambda l1,l2:l1+l2,[1,2],[3,4])))
