#!/usr/bin/python3
"""Given a pile of coins of different values,
determine the fewest number of coins needed to
meet a given amount total"""

import sys


def makeChange(coins, total):
    """[summary]
    Args:
        coins ([type]): [description]
        total ([type]): [description]
    Returns:
        [type]: [description]
    """
    if (total <= 0):
        return 0
    coinsLenght = len(coins)
    array = [0 for i in range(total + 1)]
    array[0] = 0
    for i in range(1, total + 1):
        array[i] = sys.maxsize
    for i in range(1, total + 1):
        for j in range(coinsLenght):
            if (coins[j] <= i):
                sub_res = array[i - coins[j]]
                if (sub_res != sys.maxsize and sub_res + 1 < array[i]):
                    array[i] = sub_res + 1
    if array[total] == sys.maxsize:
        return -1
    return array[total]
