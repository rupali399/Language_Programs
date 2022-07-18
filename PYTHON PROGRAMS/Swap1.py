# WAP to swap two numbers if the 1st number is greater than 2nd number 

a = int(input('Enter 1st number : '))
b = int(input('Enter 2nd number : '))
if a > b:
    if a == 10:
        
        a, b = b, a
        print('The swapped numbers are a =',a ,'and b = ' , b)
    else:
        print('The unswapped numbers are a = ',a ,'and b = ' , b)
else:
        print('The unswapped numbers are a = ',a ,'and b = ' , b)
