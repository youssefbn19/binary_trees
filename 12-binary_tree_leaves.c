#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to
 * count the number of leaves.
 *
 * Return: number of leaves in a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (!tree)
		return (0);
	leaves = binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
		return (++leaves);

	return (leaves);
}
