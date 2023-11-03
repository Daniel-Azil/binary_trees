#include "binary_trees.h"

/**
 * binary_tree_balance - Custom function.
 * @tree: Argument of the custom function.
 * Return: returns node count or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Custom function.
 * @tree: Argument of the custom function.
 * Return: returns 0, ftn & vtn
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t vtn = 0, ftn = 0;

		vtn = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		ftn = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((vtn > ftn) ? vtn : ftn);
	}
	return (0);
