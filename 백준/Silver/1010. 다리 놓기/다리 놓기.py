import math

a=int(input())
for i in range(0,a):
    r,n = map(int, input().split())
    if r>n: print(0)
    else: print(math.comb(n,r))