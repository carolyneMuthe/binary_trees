#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: A pointer to the uncle node, or NULL if no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent == NULL)
		return (NULL);

	if (parent == grandparent->left)
		return (grandparent->right);
	else
		return (grandparent->left);
}
