#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of left and right subtrees */
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	/* Return the larger height, plus 1 for the current node */
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Get the heights of the left and right subtrees */
	int left_height = (tree->left ? (int)binary_tree_height(tree->left) : 0);
	int right_height = (tree->right ? (int)binary_tree_height(tree->right) : 0);

	/* Calculate and return the balance factor */
	return (left_height - right_height);
}

