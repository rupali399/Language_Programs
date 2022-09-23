import re

pattern = r"eggs"

if re.search(pattern, "baconeggsbacon"):
    print("match found")
    
else:
    print("match not found")
    
#How many times the word is present in a string

if re.findall(pattern, "baconeggseggsbacon"):
    print(re.findall(pattern, "baconeggseggsbacon"))
    

