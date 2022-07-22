# WAP to print the contents of the dictionary whose key is greater than three and key when divided by 3 has remainder ,
# 0 using dictionary comprehension

a = {1 : 'a', 2 : 'b', 3 : 'c', 4 : 'd', 5 : 'e', 6 : 'f'}
a_com = {k : v for k , v in a.items() if k > 3 if k % 3 == 0}
print(a_com)