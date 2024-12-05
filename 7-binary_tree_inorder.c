#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 * The node's value is passed as an argument to this function.
 *
 * Description: In-order traversal visits nodes in the following order:
 *              1. Traverse the left subtree.
 *              2. Visit the root node.
 *              3. Traverse the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		/*If tree or func is NULL, do nothing */
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
