i = 3
ans = 0
while(i>0):
    a = input()
    if a != "Fizz" and a != "Buzz" and a != "FizzBuzz" :
        ans = int(a)+i
        break
    i-=1

Fizz = ans % 3
Buzz = ans % 5
if Fizz == 0 and Buzz == 0: print("FizzBuzz")
elif Fizz != 0 and Buzz == 0: print("Buzz")
elif Fizz == 0 and Buzz != 0: print("Fizz")
else: print(ans)