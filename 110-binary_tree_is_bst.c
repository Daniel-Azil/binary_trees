#include "binary_trees.h"

/**
 * _check_func_ - Custom function
 * @_var: Argument of function
 * @_arg1: Argument of function
 * @_argp: Argument of function
 * Return: 1 or 0.
 */
int _check_func_(const binary_tree_t *_var, int _arg1, int _argp)
{
	if (_var != NULL)
	{
		if (_var->n < _arg1 || _var->n > _argp)
			return (0);
		return (_check_func_(_var->left, _arg1, _var->n - 1) &&
			_check_func_(_var->right, _var->n + 1, _argp));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Custom function.
 * @tree: Argument of function
 * Return: valid or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_check_func_(tree, INT_MIN, INT_MAX));
}
