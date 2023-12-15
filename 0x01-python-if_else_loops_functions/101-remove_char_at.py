#!/usr/bin/python3
def remove_char_at(str, n):
    for letter in str:
        if 0 <= n:
            str_cpy = str[:n] + str[n + 1:]
            return str_cpy
        else:
            return str
