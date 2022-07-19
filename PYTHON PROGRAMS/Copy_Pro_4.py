# WAP to copy one list elements into anothr list, if the element is greater than 2 then copy it after squaring it

a = [1, 2, 5, 7, 9, 3, 6]
b = []

for i in a:
    if i > 2:
        b.append(i**2)
    else:
        b.append(i)
print(b)