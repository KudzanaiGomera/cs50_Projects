# input does not know the type of the argument so we have to type cast

n = int(input("Number:"))

if n % 3 == 0:
    if n % 3 == 0 and n % 5 == 0:
        print("Fizz Buzz")
    print("Fizz")
elif n % 5 == 0:
    print("Buzz")
else:
    print(n)