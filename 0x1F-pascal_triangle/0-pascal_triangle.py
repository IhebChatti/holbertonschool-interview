#!/usr/bin/python3
"""[pascal triangle]
"""

from math import factorial


def pascal_triangle(n):
    """[pascals_triangle]
    """
    result = []
    for i in range(n):
        row = []
        for j in range(i + 1):
            row.append(int((factorial(i)) / ((factorial(j)) * factorial(i - j))))
        result.append(row)
    return result
