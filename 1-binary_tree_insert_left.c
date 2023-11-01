#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left
 * child of a given node
 * @parent: Pointer to the parent node where the new node
 * is to be inserted
 * @value: The value to be stored in the new node
 * Return: A pointer to the newly inserted node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *d_var;

	if (parent == NULL)
		return (NULL);

	d_var = binary_tree_node(parent, value);
	if (d_var == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		d_var->left = parent->left;
		parent->left->parent = d_var;
	}
	parent->left = d_var;

	return (d_var);
}
