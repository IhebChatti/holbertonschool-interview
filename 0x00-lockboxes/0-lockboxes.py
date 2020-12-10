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
    seen = [0]
    for i in seen:
        for key in boxes[i]:
            if key not in seen and i < len(boxes):
                seen.append(key)
    return len(seen) == len(boxes)
