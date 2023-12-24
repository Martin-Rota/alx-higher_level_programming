#!/usr/bin/python3
def multiple_returns(sentence):
    a = len(sentence)
    if a < 1:
        return (a, None)
    return (a, sentence[0])
