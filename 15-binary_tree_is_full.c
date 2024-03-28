#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int Left_s = 0, Right_s = 0;

	if (!tree)
		return (0);


	if (tree->left && tree->right)
	{
		Left_s = binary_tree_is_full(tree->left);
		Right_s = binary_tree_is_full(tree->right);
		if (Left_s == 0 || Right_s == 0)
			return (0);
		return (1);
	}

	else if (!tree->left && !tree->right)
		return (1);

	else
		return (0);


}
