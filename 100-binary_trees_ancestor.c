#include "binary_trees.h"

/**
 * binary_trees_ancestor - Custom function
 * @first: Argument of custom function
 * @second: Argument of custom function.
 * Return: NULL,
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *arg1_var, *arg2_var;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	arg1_var = first->parent, arg2_var = second->parent;
	if (first == arg2_var || !arg1_var || (!arg1_var->parent && arg2_var))
		return (binary_trees_ancestor(first, arg2_var));
	else if (arg1_var == second || !arg2_var || (!arg2_var->parent && arg1_var))
		return (binary_trees_ancestor(arg1_var, second));
	return (binary_trees_ancestor(arg1_var, arg2_var));
}
