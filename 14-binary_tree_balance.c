#include "binary_trees.h"

/**
 * A custom function that calculates the count of nodes
 * with at least 1 child in a binary tree.
 * @tree: An argument of the function that points to the
 * root node of the tree for node counting.
 * Return: returns 0 or number of nodes.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t var_n = 0;

	if (tree)
	{
		var_n += (tree->left || tree->right) ? 1 : 0;
		var_n += binary_tree_nodes(tree->left);
		var_n += binary_tree_nodes(tree->right);
	}
	return (var_n);
}
