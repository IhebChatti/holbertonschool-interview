#!/usr/bin/python3
"""[pascal triangle]
"""
from math import factorial


def combination(n, r):
    """[calculation of combinations]
    """
    return (factorial(n)) / ((factorial(r)) * factorial(n - r))


def pascal_triangle(n):
    """[pascal_triangle]
    """
    result = []
    for count in range(n):
        row = []
        for element in range(count + 1):
            row.append(combination(count, element))
        result.append(row)
    return result
