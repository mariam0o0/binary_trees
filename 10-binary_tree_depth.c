#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node
 * @tree: pointer to the node to measure the depth
 * Return: the depth of the node or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);

}
