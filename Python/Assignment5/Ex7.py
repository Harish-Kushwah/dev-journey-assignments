file = open("sample.txt","r")

frq ={}
for line in file.readlines():
     for word in line.split(" "):
          word = word.strip()
          if word in frq:
               frq[word]+=1
          else:
               frq[word] = 1

file.close()

# sort the dict in decreasing order of frquency of words
frq = {word: frq for word , frq in sorted(frq.items(), key = lambda x: -x[1])}
 
for word,f in frq.items():
     print(word,f)
