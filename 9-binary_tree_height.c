#include "binary_trees.h"

/**
 * binary_tree_height - Custom function that Measures binary tree
 * height.
 * @tree: Argument pointer of the root node height.
 * Return: returns 0 or height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t cdn = 0, _ctnt = 0;

		cdn = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		_ctnt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((cdn > _ctnt) ? cdn : _ctnt);
	}
	return (0);
}
