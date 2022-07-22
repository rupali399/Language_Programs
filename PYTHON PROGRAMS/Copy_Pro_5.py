# if a and b are two list then copy the elements in another list which is present in both list

a = [1, 2, 3, 4]
b = [4, 3, 1, 5, 6, 7]
c = []

for i in a:
    if i in b:
        c.append(i)
print(c)