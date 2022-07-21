# WAP to add digits upto single digit

a = int(input('Enter any number : '))
sod = 0
while(a > 0):
    temp = a % 10
    sod = sod + temp
    a = a // 10
if sod == 0:
    print('sum of digit is 0')
if sod % 9 == 0:
    print('sum of digit is 9')
else:
    sod = sod % 9
    print('sum of digit is', sod)