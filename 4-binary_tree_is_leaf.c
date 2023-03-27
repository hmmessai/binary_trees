#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to be checked
 * Return: 1 if node is leaf
 *	0 if node is not leaf or node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->right || node->left)
		return (0);

	else
		return (1);

}
