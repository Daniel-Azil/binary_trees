#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Custon function that checks is a
 * node is a leaf.
 * @node: Argument of the custom function
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
