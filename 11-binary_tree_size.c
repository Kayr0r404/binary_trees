#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree:
 * Return: number of nodes in the tree
 * if the ree is null, return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (!tree)
		return (0);

	left_count = 1 + binary_tree_size(tree->left);
	right_count = binary_tree_size(tree->right);

	return (left_count + right_count);
}
