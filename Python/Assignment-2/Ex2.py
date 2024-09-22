def is_vowel(ch):
    return ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'

string = "Harish"
no_vowel = 0
for ch in string:
    if is_vowel(ch):
        no_vowel+=1

print("No. of vowel in the string is :",no_vowel)

