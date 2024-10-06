s = input()
news=""
f=0
for i in s:
    if f==0:
        news+=i.upper()
        f+=1
    else:
        news+=i
print(news)