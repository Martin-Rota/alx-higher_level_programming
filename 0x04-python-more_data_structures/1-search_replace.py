#!/usr/bin/python3

def search_replace(my_list, search, replace):

    new_list = []

    # Iterate through the elements in the original list
    for element in my_list:
        # Replace the search element with the replacement element
        if element == search:
            new_list.append(replace)
        else:
            new_list.append(element)

    return new_list
