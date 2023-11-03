#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Custom function
 * @tree: Argument of custom function
 * Return: rotated root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *arg1_var, *var_n;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	arg1_var = tree->right;
	var_n = arg1_var->left;
	arg1_var->left = tree;
	tree->right = var_n;
	if (var_n != NULL)
		var_n->parent = tree;
	var_n = tree->parent;
	tree->parent = arg1_var;
	arg1_var->parent = var_n;
	if (var_n != NULL)
	{
		if (var_n->left == tree)
			var_n->left = arg1_var;
		else
			var_n->right = arg1_var;
	}

	return (arg1_var);
}
