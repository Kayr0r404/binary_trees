#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the left-child
 * of another node
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 * @parent: pointer to the node to insert the left-child
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (new_node)
	{
		if (parent->right == NULL)
			parent->right = new_node;
		else
		{
			parent->right->parent = new_node;
			new_node->right = parent->right;
			parent->right = new_node;
		}

		return (new_node);
	}

	return (NULL);
}
