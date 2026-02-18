n = int(input())
la = list(map(int, input().split()))
t, p = map(int, input().split())

def f(a, b):
    if a % b == 0:
        return a//b
    return a//b + 1
k = f(la[0], t) + f(la[1], t) + f(la[2], t) + f(la[3], t) + f(la[4], t) + f(la[5], t)
sum=sum(la)

print(k)
print(sum//p, sum%p)