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
	binary_tree_t *newLeft;

	if (!parent)
		return (NULL);

	newLeft = binary_tree_node(parent, value);
	if (!newLeft)
		return (NULL);

	if (parent->left)
	{
		newLeft->left = parent->left;
		parent->left->parent = newLeft;
	}
	parent->left = newLeft;

	return (newLeft);
}
