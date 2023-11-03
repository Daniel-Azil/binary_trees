#include "binary_trees.h"

/**
 * binary_tree_size - A custom function that measures the
 * lenght of the tree.
 * @tree: Argument pointer that points to the root node
 * Return: returns initialised variables.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t _ctnt = 0;

	if (tree)
	{
		_ctnt += 1;
		_ctnt += binary_tree_size(tree->left);
		_ctnt += binary_tree_size(tree->right);
	}
	return (_ctnt);
}
