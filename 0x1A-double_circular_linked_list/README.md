```
     _             _     _             _                _            
  __| | ___  _   _| |__ | | ___    ___(_)_ __ ___ _   _| | __ _ _ __ 
 / _` |/ _ \| | | | '_ \| |/ _ \  / __| | '__/ __| | | | |/ _` | '__|
| (_| | (_) | |_| | |_) | |  __/ | (__| | | | (__| |_| | | (_| | |   
 \__,_|\___/ \__,_|_.__/|_|\___|  \___|_|_|  \___|\__,_|_|\__,_|_|   
                                                                     
 _ _       _            _   _ _     _   
| (_)_ __ | | _____  __| | | (_)___| |_ 
| | | '_ \| |/ / _ \/ _` | | | / __| __|
| | | | | |   <  __/ (_| | | | \__ \ |_ 
|_|_|_| |_|_|\_\___|\__,_| |_|_|___/\__|
                                        
```

Create the source file 0-add_node.c that contains the following functions:

    Add a new node to the end of a double circular linked list:
        Prototype: List *add_node_end(List **list, char *str);
        List: the list to modify
            str: the string to copy into the new node
            Returns: Address of the new node, or NULL on failure
    Add a new node to the beginning of a double circular linked list:
        Prototype: List *add_node_begin(List **list, char *str);
        List: the list to modify
            str: the string to copy into the new node
            Returns: Address of the new node, or NULL on failure
