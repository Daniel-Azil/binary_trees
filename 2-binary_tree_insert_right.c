#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a right child node
 * @parent: Pointer to parent node
 * @value: Value to store in the var_ node
 * Return: New node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *var_;

	if (parent == NULL)
		return (NULL);

	var_ = binary_tree_node(parent, value);
	if (var_ == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		var_->right = parent->right;
		parent->right->parent = var_;
	}
	parent->right = var_;

	return (var_);
}
