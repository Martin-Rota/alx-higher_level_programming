#!/usr/bin/python3
def delete_at(my_list=[], idx=0):
    if len(my_list) > 0:
        item = my_list[idx]
        my_list.remove(item)

    return my_list
