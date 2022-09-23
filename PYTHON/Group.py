import re

pattern = r"bread{eggs}*bread"

if re.match(pattern, "breadeggseggsbread"):
    print("match found")
    
else:
    print("not found")