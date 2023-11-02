#include "binary_trees.h"

/**
 * binary_tree_inorder - A custom funtion moving through a
 * binary tree traversal order.
 * @tree: Argument of the function that points to the root node.
 * @func: Argument of the function that calls for each given node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
