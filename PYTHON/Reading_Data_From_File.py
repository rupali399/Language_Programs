file = open("demo.txt", 'r')

#content = file.read()
#content = file.read(10)
content = file.readline()
print(content)

file.close()