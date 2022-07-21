# WAP to remove duplicate elements from a list

a = [1, 2, 3, 4, 4, 5, 6, 7, 6, 7, 1]
b = []
for i in a:
    if i not in b:
        b.append(i)
print(b)