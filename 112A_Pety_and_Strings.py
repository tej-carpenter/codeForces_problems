s1=input()
s2=input()
s1,s2=s1.upper(),s2.upper()
i=0
for i in range(0,len(s1)):
    if s1[i]>s2[i]:
        print(1)
        break
    elif s2[i]>s1[i]:
        print(-1)
        break
else:
    print(0)