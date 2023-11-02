#include "binary_trees.h"

/**
 * binary_tree_postorder - A custom function that traverses
 * a binary tree in post-order
 * @tree: An argument of a pointer to the root node of the tree
 * @func: An argument that represents a custom function to
 * process node values
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

