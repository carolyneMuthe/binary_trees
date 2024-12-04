#include "binary_trees.h"
#include <stdio.h>

/* Function prototypes */
void binary_tree_print(const binary_tree_t *);

/* Binary tree print implementation (add this in binary_tree_print.c) */
void print_tree(const binary_tree_t *tree, int level);
void binary_tree_print(const binary_tree_t *tree)
{
	if (!tree)
		return;
	print_tree(tree, 0);
}
void print_tree(const binary_tree_t *tree, int level)
{
	if (!tree)
		return;

	print_tree(tree->right, level + 1);
	for (int i = 0; i < level; i++)
		printf("    ");
	printf("%d\n", tree->n);
	print_tree(tree->left, level + 1);
}
