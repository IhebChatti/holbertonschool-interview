#!/usr/bin/python3
"""[pascal triangle]
"""

from math import factorial




def pascal_triangle(rows):
    """[pascals_triangle]
    """
    def combination(n, r):
        """[combination]
        """
        return int((factorial(n)) / ((factorial(r)) * factorial(n - r)))

    result = []
    for count in range(rows):
        row = []
        for element in range(count + 1):
            row.append(combination(count, element))
        result.append(row)
    return result
