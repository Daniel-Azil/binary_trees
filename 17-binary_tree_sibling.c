#include "binary_trees.h"

/**
 * binary_tree_sibling - Custom function.
 * @node: argument of custom function.
 * Return: NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
