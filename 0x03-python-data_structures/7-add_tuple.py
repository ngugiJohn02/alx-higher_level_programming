#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    # Ensure tuple_a has at least two elements, fill missing ones with 0
    tuple_a = tuple_a + (0, 0)
    tuple_b = tuple_b + (0, 0)
    
    # Only take the first two elements of each tuple
    return (tuple_a[0] + tuple_b[0], tuple_a[1] + tuple_b[1])

