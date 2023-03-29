#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibiling of a node
 * @node: a pointer to the node to find the sibling
 * Return: pointer to the sibling node
 *	NULL if node is NULL
 *		parent is NULL
 *		and no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
