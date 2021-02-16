#!/usr/bin/python3
"""[method that determines if a given data set
    represents a valid UTF-8 encoding.]
"""


def validUTF8(data):
    """[validUTF8]

    Args:
        data ([ a list of integers]): [set can contain multiple characters]

    Returns:
        [boolean]: [True if data is a valid UTF-8 encoding, else return False]
    """
    nBytes = 0
    for nb in data:
        binRep = format(nb, '#010b')[-8:]
        if nBytes == 0:
            for bit in binRep:
                if bit == '0':
                    break
                nBytes += 1
            if nBytes == 0:
                continue
            if nBytes == 1 or nBytes > 4:
                return False
        else:
            if not (binRep[0] == '1' and binRep[1] == '0'):
                return False
        nBytes -= 1
    return nBytes == 0
