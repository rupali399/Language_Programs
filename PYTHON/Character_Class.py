import re

pattern = r"[A-Z][A-Z][0-9]"

#if re.search(pattern, "AA1"):
#if re.search(pattern, "AAA"):
if re.search(pattern, "AH1"):
    print("match found")