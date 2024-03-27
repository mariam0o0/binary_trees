#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the size of tree or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t Left_s, Right_s;

	if (!tree)
		return (0);

	Left_s = binary_tree_size(tree->left);
	Right_s = binary_tree_size(tree->right);

	return (Left_s + Right_s + 1);
}
