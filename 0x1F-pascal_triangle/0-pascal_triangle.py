#!/usr/bin/python3
"""[pascal triangle]
"""
from math import factorial


def combination(n, r):
    """[combination]
    """
    return int((factorial(n)) / ((factorial(r)) * factorial(n - r)))


def pascal_triangle(rows):
    """[pascals_triangle]
    """
    result = []
    for count in range(rows):
        row = []
        for element in range(count + 1):
            row.append(combination(count, element))
        result.append(row)
    return result
