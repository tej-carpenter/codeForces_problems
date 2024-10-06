n=int(input())
s=input()
a_count,d_count=0,0
for i in s:
    if i=='A':
        a_count+=1
    elif i =='D':
        d_count+=1
if a_count>d_count:
    print("Anton")
elif a_count<d_count:
    print("Danik")
else:
    print("Friendship")