#include "binary_trees.h"

/**
  * max - return compare two numbers
  * @x: input number
  * @y: input nuumber
  * Return: the greatest number between the two
 */
size_t max(size_t x, size_t y)
{
	return (x > y ? x : y);
}

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree
 * If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (max(left_height, right_height) + 1);
}
