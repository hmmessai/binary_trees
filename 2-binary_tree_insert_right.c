#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the new node or
 *	NULL on faliure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRight = malloc(sizeof(binary_tree_t));

	if (!newRight || !parent)
		return (NULL);

	newRight->n = value;
	newRight->parent = parent;
	if (parent->right)
	{
		newRight->right = parent->right;
		newRight->right->parent = newRight;
	}
	parent->right = newRight;

	return (newRight);
}
