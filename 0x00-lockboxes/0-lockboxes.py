#!/usr/bin/python3
"""[Lockboxes]
"""


def canUnlockAll(boxes):
    """[lockboxes method]

    Args:
        boxes ([list of lists]): [list containing lists as in boxes with keys]

    Returns:
        [bool]: [true if all boxes can be opened, false otherwise]
    """
    dfs = [0]
    seen = {0}
    while dfs:
        box = dfs.pop()
        for key in boxes[box]:
            if key not in seen:
                dfs.append(key)
                seen.add(key)
            if len(seen) == len(boxes):
                return True
    if len(seen) == len(boxes):
        return True
    return False
