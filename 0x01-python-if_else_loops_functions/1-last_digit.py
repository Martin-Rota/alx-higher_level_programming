#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:
    last_digit = number % (-10)
else:
    last_digit = number % 10

if number > 5:
    print(f'Last digit of {number} is {last_digit} and is greater than 5\n')
elif number == 0:
    print(f'Last digit of {number} is {last_digit} and is 0\n')
elif number < 6 and number != 0:
    print(f'Last digit of {number} is {last_digit} and is less than 6 and not 0\n')