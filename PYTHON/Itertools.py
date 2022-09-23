#from itertools import count

#for i in count(3):
#   print(i)
    
#    if i <= 20:
#        break

#from itertools import accumulate

#numbers = list(accumulate(range(10)))
#print(numbers)

from itertools import  accumulate, takewhile

numbers = list(accumulate(range(10)))
print(numbers)

print(list(takewhile(lambda x : x <= 10, numbers)))
