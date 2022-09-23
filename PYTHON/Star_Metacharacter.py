import re

pattern = r"eggs{bacon}*"

#if re.match(pattern, "eggs"):
if re.match(pattern, "eggsbaconbacon"):
    print("match found")