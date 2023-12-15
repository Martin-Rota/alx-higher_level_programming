#!/usr/bin/python3
def remove_char_at(str, n):
    if 0 <= n < len(str):
        str_cpy = str[:n] + str[n + 1:]
        return str_cpy
    else:
        return str
