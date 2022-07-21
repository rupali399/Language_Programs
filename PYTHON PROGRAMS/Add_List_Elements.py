a = [26, 13, 56, 45, 98]
b = []
for i in a:
    s = 0
    for d in str(i):
        s += int(d)
    b.append(s)
print(b)