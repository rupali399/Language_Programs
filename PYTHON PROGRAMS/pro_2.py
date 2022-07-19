# WAP to find missing values

a = [1, 3, 6, 7, 8, 9, 11]
b = []

for i in range(a[0], a[-1]):
    if i not in a:
        b.append(i)
print(b)