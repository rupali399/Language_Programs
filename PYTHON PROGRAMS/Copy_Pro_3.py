# WAP to copy those elements of list which is divisible by 2 nad 5

a = [1, 2, 5, 7, 9, 3, 6]
b = []
for i in a:
    if (a % 2 == 0 and a % 5 == 0):
        b.append(i)
print(b)