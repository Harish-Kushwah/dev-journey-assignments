def reverse(string):
    string = list(string)
    l = len(string)
    for i in range(l//2):
        t = string[i]
        string[i] = string[l-i-1]
        string[l-i-1] = t
    ans = ''
    for x in string:
        ans+=x
    print(ans)

reverse("Harish Kushwah")