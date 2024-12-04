#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, otherwise 0.
 *         Returns 0 if the node is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		/* If the node is NULL, return 0*/
		return (0);
/*  A leaf node has no left or right children */
	if (!node->left && !node->right)
		return (1);

	return (0);
}
