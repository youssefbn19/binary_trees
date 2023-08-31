#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (left && right)
			return (1);
		else
			return (0);
	}

	return (0);
}
