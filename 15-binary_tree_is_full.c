#include "binary_trees.h"

/**
 * p_cfunc - Custom function
 * @arg: Argument of custom function.
 * Return: returns 0 or 1.
 */
int p_cfunc(const binary_tree_t *arg)
{
	if (arg != NULL)
	{
		if ((arg->left != NULL && arg->right == NULL) ||
		    (arg->left == NULL && arg->right != NULL) ||
		    p_cfunc(arg->left) == 0 ||
		    p_cfunc(arg->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Custom function
 * @tree: Argument of custom function.
 * Return:  returns 0 or 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (p_cfunc(tree));
}
