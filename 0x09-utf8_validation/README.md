```
       _    __        ___               _ _     _       _   _
 _   _| |_ / _|      ( _ )  __   ____ _| (_) __| | __ _| |_(_) ___  _ __
| | | | __| |_ _____ / _ \  \ \ / / _` | | |/ _` |/ _` | __| |/ _ \| '_ \
| |_| | |_|  _|_____| (_) |  \ V / (_| | | | (_| | (_| | |_| | (_) | | | |
 \__,_|\__|_|        \___/    \_/ \__,_|_|_|\__,_|\__,_|\__|_|\___/|_| |_|

```

Write a method that determines if a given data set represents a valid UTF-8 encoding.

    Prototype: def validUTF8(data)
    Return: True if data is a valid UTF-8 encoding, else return False
    A character in UTF-8 can be 1 to 4 bytes long
    The data set can contain multiple characters
    The data will be represented by a list of integers
    Each integer represents 1 byte of data, therefore you only need to handle the 8 least significant bits of each integer
