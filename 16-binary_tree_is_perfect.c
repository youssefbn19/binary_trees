#include "binary_trees.h"
/**
 * is_perfect - Checks if a binary tree is perfect
 *
 * @root: A pointer to the node in binary tree.
 * @d: the node depth.
 * @level: the node level(height).
 *
 * Return: 1 if it is a perfect binary tree, 0 otherwise.
 */
int is_perfect(const binary_tree_t *root, int d, int level)
{
	if (root == NULL)
		return (1);
	if (root->left == NULL && root->right == NULL)
		return (d == level + 1);
	if (root->left == NULL || root->right == NULL)
		return (0);

	return (is_perfect(root->left, d, level + 1) &&
	is_perfect(root->right, d, level + 1));
}
/**
 * depth - calculate depth of a binary tree
 *
 * @node: A pointer to the node to start depth from.
 *
 * Return: the depth of a node.
 */
int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	return (is_perfect(tree, d, 0));
}
