#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    a = len(tuple_a)
    b = len(tuple_b)

    x = tuple_a[0] if a > 0 else 0
    y = tuple_b[0] if b > 0 else 0
    v = tuple_a[1] if a > 1 else 0
    w = tuple_b[1] if b > 1 else 0

    return ((x + y), (v + w))
