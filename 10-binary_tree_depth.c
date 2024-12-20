#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node. If tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	/* Add 1 for the current node and recurse up the parent chain */
	return (1 + binary_tree_depth(tree->parent));
}
