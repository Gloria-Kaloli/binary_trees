#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measure binary tree node
 * @tree: pointer to node to measure the depth
 * Description: 10. Depth
 *
 * Return: as follows
 * upon success, return depth
 * upon fail, return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* declare and initialize variable for depth */
	size_t depth = 0;

	/* base case */
	if (tree == NULL)
	{
		return (0);
	}

	/* iterate through path */
	while (tree)
	{
		tree = tree->parent;
		depth++;
	}

	/* upon success, return depth */
	return (depth - 1);
}
