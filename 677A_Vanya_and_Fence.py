n,h=map(int,input().split())
ls = [int(i) for i in input().split()]
for i in ls:
    if i > h:
        n+=1
print(n)