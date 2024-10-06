s=input()
count=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
for i in s:
    count[ord(i)-97]+=1
cnt=0

for i in count:
    if i!=0:
        cnt+=1

if cnt%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")