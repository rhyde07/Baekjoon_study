a=int(input())
b=int(input())
c=int(input())

d = a*b*c
arr=[0]*10

while d>0:
    arr[d%10]+=1
    d//=10

for i in range(10):
    print(arr[i])

