a = int(input('Enter any number : '))

for i in range(2, a):
    if a % i == 0:
        print(a, 'is not Prime')
        break
else:
    print(a,'is Prime number')