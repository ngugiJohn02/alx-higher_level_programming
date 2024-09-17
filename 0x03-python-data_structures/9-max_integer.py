def max_integer(my_list=[]):
    if len(my_list) == 0:
        return None
    
    max_val = my_list[0]  # Assume the first element is the largest
    for num in my_list:
        if num > max_val:
            max_val = num  # Update max_val if a larger number is found
    return max_val
