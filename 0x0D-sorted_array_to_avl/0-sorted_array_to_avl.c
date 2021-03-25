#include "binary_trees.h"



/**
 * binary_tree_node - create a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node on success, NULL on failure
 */

avl_t *binary_tree_node(avl_t *parent, int value)
{
	avl_t *new;

	new = malloc(sizeof(avl_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

/**
 * insert - insert to avl tree
 * @node: node
 * @size: size
 * @start: start of arr
 * @array: array
 *
 * Return: new avl tree
 */
avl_t *insert(avl_t **node, int size, int start, int *array)
{
	avl_t *new_avl = NULL;
	int mid = (start + (size - 1)) / 2;

	if (start > size - 1)
		return (NULL);
	new_avl = binary_tree_node(*node, array[mid]);
	if (mid != start)
		new_avl->left = insert(&new_avl, mid - 1, start, array);
	if (mid != size)
		new_avl->right = insert(&new_avl, size, mid + 1, array);
	return (new_avl);
}

/**
 * sorted_array_to_avl - function that builds an AVL tree from an array
 * @array: array to build avl tree from
 * @size: array size
 *
 * Return: avl tree
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *avl;

	avl = insert(&avl, size, 0, array);
	return (avl);
}
