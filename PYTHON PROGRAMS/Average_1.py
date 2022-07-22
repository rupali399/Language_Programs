# Find average of list elements using llist comprehension , input values should be user defined and space seprated

a = int(input('How many subjects:'))
print('Enter the subjects marks space separated')
marks = [int(i) for i in input().split(' ')[:a]]
average = sum(marks)/a
print(average)