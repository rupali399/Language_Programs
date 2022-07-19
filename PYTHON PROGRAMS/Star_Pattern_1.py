a = int(input('Enter any number : '))

for x in range(a):  # rows
    for y in range(a - x):  # columns
        print('*', end = ' ')
    print()