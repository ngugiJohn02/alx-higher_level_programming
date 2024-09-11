#!/usr/bin/python3
def remove_char_at(s, n):
    """
    Creates a copy of the string with the character at position n removed.

    Parameters:
    s (str): The original string.
    n (int): The position of the character to remove.

    Returns:
    str: A new string with the character at position n removed,
    or the original string if n is out of range.
    """
    if n < 0 or n >= len(s):
        return s  # Return the original string if the position is out of range

    # Create a new string with the character at position n removed
    return s[:n] + s[n+1:]
