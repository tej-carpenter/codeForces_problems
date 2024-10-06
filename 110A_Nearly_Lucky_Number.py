n=input()
lucky_count=0
for i in n:
    if i in "47":
        lucky_count+=1
if lucky_count==4 or lucky_count==7:
    print("YES")
else:
    print("NO")