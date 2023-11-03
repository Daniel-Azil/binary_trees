#include "binary_trees.h"

/**
 * binary_tree_nodes - Custom function that counts the nodes.
 * @tree: Argument pointer of the root node.
 * Return: returns 0 or numbers of node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cdn = 0;

	if (tree)
	{
		cdn += (tree->left || tree->right) ? 1 : 0;
		cdn += binary_tree_nodes(tree->left);
		cdn += binary_tree_nodes(tree->right);
	}
	return (cdn);
}
