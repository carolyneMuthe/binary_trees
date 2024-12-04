#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a root, otherwise 0.
 *         Returns 0 if the node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* A root node has no parent (parent pointer is NULL) */
	if (!node->parent)
		return (1);

	return (0);
}
