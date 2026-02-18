import sys

def NRound(num):
    if(num - int(num)) >= 0.5:
        return int(num) + 1
    else:
        return int(num)

n = int(sys.stdin.readline().rstrip())
la = [int(sys.stdin.readline().rstrip()) for _ in range(n)]

la.sort()
ex = NRound(n * 0.15)
sum = 0

for i in range(ex, n-ex):
    sum += la[i]

k = NRound(sum/(n-2*ex)) if (n-2*ex) != 0 else 0
print(k)
