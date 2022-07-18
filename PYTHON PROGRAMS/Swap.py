# WAP to swap two numbers if first number is greater than second number

a = int(input('Enter 1st number : '))
b = int(input('Enter 2nd number : '))

if a > b:
    a, b = b, a
    print('The swapped numbers are a =',a ,'and b = ' , b)
else:
    print('The unswapped numbers are a = ',a ,'and b = ' , b)
