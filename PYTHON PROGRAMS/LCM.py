a = int(input('Enter 1st number : '))
b = int(input('Enter 2nd number : '))

if a < b:
    a, b = b, a
for i in range(b, (a*b + 1), b):
    if i % a == 0:
        print('LCM is : ', i)
        break