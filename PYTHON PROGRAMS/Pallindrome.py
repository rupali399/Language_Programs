my_str = input('Enter any string : ')
my_str = my_str.lower()
new_str = reversed(my_str)

if list(my_str) == list(new_str):
    print(my_str, 'is Pallindrome')
else:
    print(my_str, 'is not Pallindrome')