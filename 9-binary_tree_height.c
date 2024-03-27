#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height of the tree or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Left_h = 0;
	size_t Right_h = 0;

	if (!tree)
		return (0);

	Left_h = binary_tree_height(tree->left);
	Right_h = binary_tree_height(tree->right);

	return ((Left_h > Right_h) ? (Left_h + 1) : (Right_h + 1));
}
