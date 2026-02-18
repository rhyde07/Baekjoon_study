n = int(input())

for i in range(n):
    dic = {}
    a, b = map(int, input().split())
    for j in range(a):
        k=int(input())
        dic[k] = dic.get(k, 0) + 1
    print(sum(dic.values())-len(dic))

