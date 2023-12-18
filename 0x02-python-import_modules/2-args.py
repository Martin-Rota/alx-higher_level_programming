#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    if len(argv) == 2:
        print('{} argument:'.format(len(argv) - 1))
        print('1: {}'.format(argv[1]))
    else:
        print('{} arguments:'.format(len(argv) - 1) if len(argv) != 1 else '{} arguments.'.format(len(argv) - 1))
        for arg_value, argument in enumerate(argv[1:], start=1):
            print('{}: {}'.format(arg_value, argument))
