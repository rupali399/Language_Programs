# WAP to add digits of any number

a = int(input('Enter any number : '))
sum = 0

while a > 0:
    temp = a % 10
    sum = sum + temp
    a = a // 10
print(sum)