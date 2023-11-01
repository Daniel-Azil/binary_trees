#include "binary_trees.h"

/**
 * binary_tree_node - A custom function that create nodes of
 * binary trees.
 * @parent: Argument of the custom function that points to the
 * parent node.
 * @value: Argument of the custom function.
 * Return: returns NULL or var.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *d_var;

	d_var = malloc(sizeof(binary_tree_t));
	if (d_var == NULL)
		return (NULL);
	d_var->n = value;
	d_var->parent = parent;
	d_var->left = NULL;
	d_var->right = NULL;
	return (d_var);
}
