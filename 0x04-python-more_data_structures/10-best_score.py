#!/usr/bin/python3
def best_score(a_dictionary):
    if not a_dictionary:
        return None
    value = 0
    best_key = None

    for key in a_dictionary:
        if a_dictionary[key] > value:
            value = a_dictionary[key]
            best_key = key

    return best_key
