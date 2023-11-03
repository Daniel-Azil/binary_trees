#include "binary_trees.h"

/**
 * p_cfunction1 - Custom function.
 * @arg: Argument of the custom function.
 * Return: returns 0, ftn & vtn
 */
size_t p_cfunction1(const binary_tree_t *arg)
{
	if (arg)
	{
		size_t vtn = 0, ftn = 0;

		vtn = arg->left ? 1 + p_cfunction1(arg->left) : 1;
		ftn = arg->right ? 1 + p_cfunction1(arg->right) : 1;
		return ((vtn > ftn) ? vtn : ftn);
	}
	return (0);


/**
 * binary_tree_balance - Custom function.
 * @tree: Argument of the custom function.
 * Return: returns node count or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (p_cfunction1(tree->left) - p_cfunction1(tree->right));

	return (0);
}
