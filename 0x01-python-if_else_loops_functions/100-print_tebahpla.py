#!/usr/bin/python3
for letter in range(ord('z'), ord('a') - 1, -1):
    print('{}'.format(chr(letter)) if letter % 2 == 0 else chr(letter - 32), end='')
