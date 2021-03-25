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
 * @array: array
 * @start: start of array
 * @end: end of arr
 * @parent: parent
 *
 * Return: root node to avl tree
 */
avl_t *insert(int *array, size_t start, size_t end, avl_t *parent)
{
	size_t mid;
	avl_t *root;

	if (start > end)
		return (NULL);

	mid = (start + end) / 2;
	root = binary_tree_node(parent, array[mid]);
	if (root)
	{
		if (mid != end)
			root->right = insert(array, mid + 1, end, root);
		if (mid != start)
			root->left = insert(array, start, mid - 1, root);

	}

	return (root);
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

	avl = insert(array, 0, size - 1, NULL);
	return (avl);
}
