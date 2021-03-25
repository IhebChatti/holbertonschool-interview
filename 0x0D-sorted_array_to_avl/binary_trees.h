#ifndef __BINARY_TREE__
#define __BINARY_TREE__

/* Includes */
#include <stdlib.h>
#include <stdio.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;

/* functions prototypes */
void binary_tree_print(const binary_tree_t *);
avl_t *sorted_array_to_avl(int *array, size_t size);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
avl_t *insert(avl_t **node, int size, int start, int *array);

#endif
