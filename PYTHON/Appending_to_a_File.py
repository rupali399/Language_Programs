file = open("demo.txt", 'w')

file.write("This is the first line of this file")

file.close()

file = open("demo.txt", 'a')

file.write("\nThis is the new line")

file.close()