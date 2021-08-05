#!/usr/bin/python3
"""[pascal triangle]
"""

from math import factorial


def pascal_triangle(n):
    """[pascals_triangle]
    """
    result = []
    for count in range(n):
        row = []
        for element in range(count + 1):
            row.append(int((factorial(count)) / ((factorial(element)) * factorial(count - element))))
        result.append(row)
    return result
