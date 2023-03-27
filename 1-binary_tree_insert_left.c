#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child of another node.
 * @parent: a pointer to the node to insert left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node or
 *	NULL on faliure or if the parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeft = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp;

	if (!newLeft || !parent)
		return (NULL);

	newLeft->n = value;
	newLeft->parent = parent;
	if (parent->left)
	{
		temp = parent->left;
		parent->left = newLeft;
		newLeft->left = temp;
		newLeft->left->parent = newLeft;
	}
	else
	{
		parent->left = newLeft;
	}
	newLeft->right = NULL;

	return (newLeft);
}
