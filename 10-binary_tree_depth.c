#include "binary_trees.h"

/**
 * binary_tree_depth - A custom function that Measures the
 * depth of node in a binary tree.
 * @tree: Argument of pointer to the node to measure the depth.
 * Return: returns 0 or depth of node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
