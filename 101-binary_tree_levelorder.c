#include "binary_trees.h"
#include <stdlib.h>

/**
 * struct queue_s - Structure to represent a queue of nodes.
 * @node: Pointer to the binary tree node.
 * @next: Pointer to the next node in the queue.
 */
struct queue_s
{
	binary_tree_t *node;
	struct queue_s *next;
};

typedef struct queue_s queue_t;

/**
 * enqueue - Adds a node to the end of the queue.
 * @head: Double pointer to the head of the queue.
 * @node: Pointer to the binary tree node to enqueue.
 */
void enqueue(queue_t **head, binary_tree_t *node)
{
	queue_t *new_node, *temp;

	new_node = malloc(sizeof(queue_t));
	if (!new_node)
		return;
	new_node->node = node;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
}

/**
 * dequeue - Removes and returns the front node from the queue.
 * @head: Double pointer to the head of the queue.
 * Return: The dequeued binary tree node, or NULL if the queue is empty.
 */
binary_tree_t *dequeue(queue_t **head)
{
	queue_t *temp;
	binary_tree_t *node;

	if (!*head)
		return (NULL);

	temp = *head;
	node = temp->node;
	*head = (*head)->next;
	free(temp);

	return (node);
}

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *queue = NULL;
	binary_tree_t *current;

	if (!tree || !func)
		return;

	enqueue(&queue, (binary_tree_t *)tree);

	while (queue)
	{
		current = dequeue(&queue);
		func(current->n);

		if (current->left)
			enqueue(&queue, current->left);
		if (current->right)
			enqueue(&queue, current->right);
	}
}
