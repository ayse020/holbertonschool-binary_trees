#include "binary_trees.h"

/**
 * calculate_height - Calculates height for balance factor
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree
 */
int calculate_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = calculate_height(tree->left);
	right_h = calculate_height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = calculate_height(tree->left);
	right_height = calculate_height(tree->right);

	return (left_height - right_height);
}
