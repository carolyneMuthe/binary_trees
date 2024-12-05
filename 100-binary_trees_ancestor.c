#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: Pointer to the lowest common ancestor,
 * or NULL if no common ancestor.
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first,
		const binary_tree_t *second
)
{
	binary_tree_t *temp_first = (binary_tree_t *)first;
	binary_tree_t *temp_second = (binary_tree_t *)second;


	while (temp_first)
	{
		binary_tree_t *temp = temp_second;

		while (temp)
		{
			if (temp == temp_first)
				return ((binary_tree_t *)temp_first);
			temp = temp->parent;
		}
		temp_first = temp_first->parent;
	}

	return (NULL);
}
