#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count
 * Return: the number of nodes or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_n = 0;

	if (!tree)
		return (0);

	nodes_n += ((tree->left || tree->right) ? 1 : 0);
	nodes_n += binary_tree_nodes(tree->right);
	nodes_n += binary_tree_nodes(tree->left);

	return (nodes_n);
}
