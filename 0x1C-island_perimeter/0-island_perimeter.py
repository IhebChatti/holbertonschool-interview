#!/usr/bin/python3
"""[python script to calculate island perimeter]
"""

def island_perimeter(grid):
    """[island_perimeter]

    Args:
        grid ([list of list of integers]): [island]

    Returns:
        [integer]: [perimeter of the island]
    """
    area = 0
    for row in grid + list(map(list, zip(*grid))):
        for i, j in zip([0] + row, row + [0]):
            area += int(i != j)
    return area
