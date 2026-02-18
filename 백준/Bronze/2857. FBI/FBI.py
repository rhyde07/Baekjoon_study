a=input()
b=input()
c=input()
d=input()
e=input()
who = 0

if "FBI" in a:
    who = 1
    print(1, end=" ")

if "FBI" in b:
    who = 1
    print(2, end=" ")

if "FBI" in c:
    who = 1
    print(3, end=" ")

if "FBI" in d:
    who = 1
    print(4, end=" ")

if "FBI" in e:
    who = 1
    print(5, end=" ")

if who == 0: print("HE GOT AWAY!")