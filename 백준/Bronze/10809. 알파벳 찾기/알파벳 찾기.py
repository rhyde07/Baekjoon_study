a=input()
b=[0 for i in range(26)]

for i in range(ord('a'), ord('z') + 1):
    for j in range(len(a)):
        if a[j] == chr(i):
            b[i - ord('a')] = j
            break
        b[i - ord('a')] = -1

for i in range(26):
    print(b[i], end=' ')