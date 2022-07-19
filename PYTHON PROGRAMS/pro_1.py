# WAP to print following 5 x 4 = 20
#                        4 x 3 = 12
#                        3 x 2 = 6
#                        2 x 1 = 2

a = int(input('Enter 1st number : '))
b = int(input('Enter 2nd number : '))

while (a and b) > 0:
    c = a * b
    print(a, 'x', b, '=', c)
    a -= 1
    b -= 1