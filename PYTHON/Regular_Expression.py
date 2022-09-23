import re

pattern = r"eggs"

#if re.match(pattern, "eggs"):
#if re.match(pattern, "eggseggseggs"):
#if re.match(pattern, "eggseggsbacon"):
if re.match(pattern, "baconeggs"):
    print("Match found")

else:
    print("not found")