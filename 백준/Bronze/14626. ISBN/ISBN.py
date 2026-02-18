L = input()
sum = 0
j = 0

for i in range(13):
    if L[i] == '*':
        j = i
        continue
    sum += int(L[i]) * (3 if i%2 else 1)

for i in range(10):
    if (sum + i * (3 if j%2 else 1)) % 10 == 0:
        print(i)
        break
