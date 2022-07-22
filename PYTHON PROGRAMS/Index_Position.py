a = [1, 2, 3, 4, 1, 5]
b = [1, 3]
c = []
for i in range (len(a)):
  if a[i] in b:
    c.append(i)
print(c)