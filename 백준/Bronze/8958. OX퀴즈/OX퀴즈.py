a=int(input())
for i in range(a):
    b=input()
    sum = 0
    count = 1
    contin = 0
    for j in b:
        if j=='O':
            if contin == 1:
                count += 1
            else:
                contin = 1
                count = 1
            sum += count
        else: contin =0
    print(sum)
