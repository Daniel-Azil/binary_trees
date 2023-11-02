#include "binary_trees.h"

/**
 * binary_tree_preorder - A custom function that inspects
 * pre-order traversal.
 * @tree: Argument of function pointing to the root node.
 * @func: Argument of points to each given node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
