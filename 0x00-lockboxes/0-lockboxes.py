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
    if not boxes[0] or not isinstance(boxes[0], list):
        return false
    for i, box in enumerate(boxes):
        for k in box:
            if k in range(0, len(boxes)) and k is not i and k not in seen:
                seen.append(k)
    return len(seen) == len(boxes)
