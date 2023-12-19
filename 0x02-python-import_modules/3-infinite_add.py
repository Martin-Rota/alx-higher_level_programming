#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    if len(argv) > 1:
        result = 0
        for argument in argv[1:]:
            result += int(argument)

        print('{:d}'.format(result))
