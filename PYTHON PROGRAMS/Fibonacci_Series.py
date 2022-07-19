a = 0
b = 1
n = int(input('Enter the number upto you want fibonacci series: '))

for i in range(2, n+1):
    a, b = b, a+b
    print(a, end = ' ')