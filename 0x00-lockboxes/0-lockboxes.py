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
    seen = [False] * len(boxes)
    seen[0] = True
    stack = [0]
    while stack:
        box = stack.pop()
        for key in boxes[box]:
            if not seen[key]:
                stack.append(key)
                seen[key] = True
    return all(seen)
