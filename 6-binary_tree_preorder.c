#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to the function to call for each node.
 * The node's value is passed as an argument to this function.
 *
 * Return: Nothing.
 *
 * Description: Pre-order traversal visits nodes in the following order:
 *              1. Visit the root node.
 *              2. Traverse the left subtree.
 *              3. Traverse the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		/* If the tree or function is NULL, do nothing */
		return;

	func(tree->n);  /* Call func with the value of the current node */
	binary_tree_preorder(tree->left, func);  /* Traverse the left subtree */
	binary_tree_preorder(tree->right, func);
}
