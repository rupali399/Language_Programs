# WAP to copy squares of one list elements into another list elements without shallow and deep copy

a = [1, 2, 5, 7, 9, 3, 6]
b = []
for i in a:
    b.append(i**2)
print(b)