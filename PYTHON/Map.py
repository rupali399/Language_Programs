#def add(x):
#    return x + 2

#newlist = [10, 20, 30, 40, 50]

#result = list(map(add, newlist))

#print(result)

newlist = [10, 20, 30, 40, 50]

result = list(map(lambda a : a + 2, newlist))

print(result)
