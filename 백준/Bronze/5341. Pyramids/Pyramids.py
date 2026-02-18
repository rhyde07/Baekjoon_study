def f(n):
    if n==1: return 1
    else: return n+f(n-1)

a=1
while(a!=0):
    a=int(input())
    if a==0: break
    else:
        print(f(a))