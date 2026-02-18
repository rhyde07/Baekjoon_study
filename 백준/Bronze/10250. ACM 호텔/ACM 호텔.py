a=int(input())
for i in range(a):
    h, w, n = map(int,  input().split())
    y=n%h
    if(y==0):
        y+=h
        x=n//h
    else: x=n//h+1

    print(y*100+x)
