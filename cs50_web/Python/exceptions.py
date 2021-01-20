import sys

try:
    x = int(input("x: "))
    y = int(input("y: "))
except ValueError:
    print("Invalid input: ")
    sys.exit()

try:
    result = x / y
except ZeroDivisionError:
    print("Can't divide by zero")
    sys.exit()