newlist = [1, 2, 3, 4, 5, 6, 7, 8,12, 45, 34, 67]

result = list(filter(lambda a : a % 2 == 0, newlist))

print(result)