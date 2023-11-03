#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Custom function
 * @tree: Argument of custom function
 * Return: root node.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *_var, *kvar_n;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	_var = tree->left;
	kvar_n = _var->right;
	_var->right = tree;
	tree->left = kvar_n;
	if (kvar_n != NULL)
		kvar_n->parent = tree;
	kvar_n = tree->parent;
	tree->parent = _var;
	_var->parent = kvar_n;
	if (kvar_n != NULL)
	{
		if (kvar_n->left == tree)
			kvar_n->left = _var;
		else
			kvar_n->right = _var;
	}

	return (_var);
}
