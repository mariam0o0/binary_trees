#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count
 * Return: the number of leaves or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t Left_l, Right_l;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	Left_l = binary_tree_leaves(tree->left);
	Right_l = binary_tree_leaves(tree->right);

	return (Left_l + Right_l);
}
