#!/usr/bin/python3
def delete_at(my_list=[], idx=0):
    if idx < len(my_list) and idx >= 0:
        item = my_list[idx]
        my_list.remove(item)
    return my_list
