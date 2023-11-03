#include "binary_trees.h"

/**
 * binary_tree_leaves - Custom function that counts number
 * of leaves in the tree..
 * @tree: Argument pointer to tree root node.
 * Return: given number in the variable.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t _cvar_ = 0;

	if (tree)
	{
		_cvar_ += (!tree->left && !tree->right) ? 1 : 0;
		_cvar_ += binary_tree_leaves(tree->left);
		_cvar_ += binary_tree_leaves(tree->right);
	}
	return (_cvar_);
}
