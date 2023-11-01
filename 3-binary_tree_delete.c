#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively delete a binary tree
 * @tree: pointer argument of the root node to be removed
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
