# k->1st banana ki rate
# n->available paisa
# w banan needed

total_paisa=0
k,n,w=map(int,input().split())
for i in range(1,w+1):
    total_paisa+=(k*i)
if total_paisa>n:
    print(total_paisa-n)
else:
    print(0)