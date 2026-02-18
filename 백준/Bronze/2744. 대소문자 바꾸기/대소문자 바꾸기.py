a=input()
b=""
for i in range(len(a)):
    if ord(a[i])>=97: b+=chr(ord(a[i])-32)
    else : b+=chr(ord(a[i])+32)
print(b)