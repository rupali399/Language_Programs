import re

string = "My name is john, Hi I'm john"

pattern = r"john"

newstring = re.sub(pattern, "Rob", string)

print(newstring)