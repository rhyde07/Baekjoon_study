set1 = set()
for i in range(10):
    a=int(input())
    a %= 42
    set1.add(a)
print(len(set1))
