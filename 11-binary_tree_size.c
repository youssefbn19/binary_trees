#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: the size of a binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);
	nodes = binary_tree_size(tree->left);
	nodes += binary_tree_size(tree->right);

	return (++nodes);
}
