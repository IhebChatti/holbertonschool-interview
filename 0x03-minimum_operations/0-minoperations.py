#!/usr/bin/python3
"""[python script to determine number of minimum operations]
"""


def minOperations(n):
    """[minOperations]

    Args:
        n ([integer]): [the number given]

    Returns:
        [integer]: [number of minimum operations]
    """
    if not isinstance(n, int) or n <= 1:
        return 0
    res = 0
    i = 2
    while n > 1:
        if n % i == 0:
            res += i
            n /= i
        else:
            i += 1
    return res
