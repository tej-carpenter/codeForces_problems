s=input()
lower_count,upper_count=0,0
for i in s:
    if i in "qwertyuiopasdfghjklzxcvbnm":
        # lowercase
        lower_count+=1
    if i in "QWERTYUIOPASDFGHJKLZXCVBNM":
        # lowercase
        upper_count+=1
if lower_count>=upper_count:
    print(s.lower())
else:
    print(s.upper())