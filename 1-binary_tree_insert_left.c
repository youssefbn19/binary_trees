#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: Return a pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		printf("Memory Allocate Error\n");
		return (NULL);
	}
	newNode->n = value;
	newNode->right = NULL;
	newNode->parent = parent;
	if (parent->left)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
		parent->left = newNode;
	}
	else
	{
		newNode->left = NULL;
		parent->left = newNode;
	}
	return (newNode);
}
