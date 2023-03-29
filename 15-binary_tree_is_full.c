#include "binary_trees.h"

/**
 * is_full_recursive - checks if a binary tree is full recursively
 * @tree: a pointer to the root node of tree
 * Return: 1 if trees is full
 *	otherwise, 0
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}

	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of tree
 * Return: 1 if trees is full
 *      0 otherwise or if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_full_recursive(tree));

}
