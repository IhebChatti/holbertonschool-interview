```
    ___     ___       _                      
   / \ \   / / |     | |_ _ __ ___  ___  ___ 
  / _ \ \ / /| |     | __| '__/ _ \/ _ \/ __|
 / ___ \ V / | |___  | |_| | |  __/  __/\__ \
/_/   \_\_/  |_____|  \__|_|  \___|\___||___/
                                             
```
Write a function that checks if a binary tree is a valid AVL Tree

    Prototype: int binary_tree_is_avl(const binary_tree_t *tree);
    Where tree is a pointer to the root node of the tree to check
    Your function must return 1 if tree is a valid AVL Tree, and 0 otherwise
    If tree is NULL, return 0

Properties of an AVL Tree:

    An AVL Tree is a BST
    The difference between heights of left and right subtrees cannot be more than one
    The left and right subtree each must also be a binary search tree

