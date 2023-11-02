#include "binary_trees.h"

/**
 * binary_tree_is_root - Custom function that checks for root
 * binary tree.
 * @node: argument of custom function.
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
