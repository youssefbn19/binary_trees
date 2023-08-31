#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: the height of a binary tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);
	l_height = tree_height(tree->left);
	r_height = tree_height(tree->right);
	if (l_height >= r_height)
		return (++l_height);
	else
		return (++r_height);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A  pointer to the root node of the tree to
 * measure the balance factor.
 *
 * Return: the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = tree_height(tree->left);
	r_height = tree_height(tree->right);

	return (l_height - r_height);
}
