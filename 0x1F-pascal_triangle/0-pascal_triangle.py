#!/usr/bin/python3
"""[pascal triangle]
"""


def pascal_triangle(n):
    """[pascals_triangle]
    """
    result = []
    for i in range(n):
        element = [None for _ in range(i + 1)]
        element[0], element[-1] = 1, 1
        for j in range(1, len(element) - 1):
            element[j] = result[i - 1][j - 1] + result[i - 1][j]
        result.append(element)
    return result
