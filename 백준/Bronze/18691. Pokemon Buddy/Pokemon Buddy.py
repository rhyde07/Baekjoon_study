for _ in range(int(input())):
    g, c, e = map(int, input().split())
    total_need = e - c
    if total_need <= 0:
        print(0)
    elif g == 1:
        print(total_need)
    elif g == 2:
        print(total_need * 3)
    else:
        print(total_need * 5)