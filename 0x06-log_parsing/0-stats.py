#!/usr/bin/python3
"""[a script that reads stdin line by line and computes metrics]
"""
from sys import stdin


status_codes = {
        "200": 0,
        "301": 0,
        "400": 0,
        "401": 0,
        "403": 0,
        "404": 0,
        "405": 0,
        "500": 0
    }
file_size = 0
def log_stats():
    """[log_stats: function to print the sats with size]
    """
    print("File size: {}".format(file_size))
    for st in sorted(status_codes.keys()):
        if status_codes[st]:
            print("{}: {}".format(st, status_codes[st]))

if __name__ == "__main__":
    count = 0
    try:
        for line in stdin:
            if len(line) >= 3:
                parsed = line.split()
                code = parsed[-2]
                size = parsed[-1]
                if code in status_codes.keys():
                    status_codes[code] += 1
            file_size += int(size)
            if count == 9:
                log_stats()
                count = 0
            count += 1
    except KeyboardInterrupt as e:
        log_stats()
        raise(e)
    log_stats()
