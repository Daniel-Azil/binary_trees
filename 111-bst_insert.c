#include "binary_trees.h"

/**
 * bst_insert - Custom function
 * @tree: Argument of custom function
 * @value: Argument of custom function
 *
 * Return: return node or NULL.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *_arg, *var_;

	if (tree != NULL)
	{
		_arg = *tree;

		if (_arg == NULL)
		{
			var_ = binary_tree_node(_arg, value);
			if (var_ == NULL)
				return (NULL);
			return (*tree = var_);
		}

		if (value < _arg->n)
		{
			if (_arg->left != NULL)
				return (bst_insert(&_arg->left, value));

			var_ = binary_tree_node(_arg, value);
			if (var_ == NULL)
				return (NULL);
			return (_arg->left = var_);
		}
		if (value > _arg->n)
		{
			if (_arg->right != NULL)
				return (bst_insert(&_arg->right, value));

			var_ = binary_tree_node(_arg, value);
			if (var_ == NULL)
				return (NULL);
			return (_arg->right = var_);
		}
	}
	return (NULL);
}
