#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks for leaf
 * @node: pointer to node to check
 *
 * Description: 4. Is leaf
 * Return: as follows
 * if leaf, return 1
 * if not leaf or NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* if given node is NULL */
	if (node == NULL)
	{
		return (0);
	}

	/* if given node doesn't have two children */
	if ((node->left == NULL) && (node->right == NULL))
	{
		return (1);
	}

	return (0);
}
