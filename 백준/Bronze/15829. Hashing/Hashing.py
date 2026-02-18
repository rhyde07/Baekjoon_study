L = int(input())
tx = input()
r = 31
M = 1234567891

i = 0
sum = 0
for alpha in tx:
    k = (ord(alpha) - ord('a') + 1) * (r**i % M)
    sum += k % M
    i += 1

print(sum % M)
