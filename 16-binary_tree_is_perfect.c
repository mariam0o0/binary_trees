#include "binary_trees.h"

/**
 * tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check
 * Return: the height or 0 if not perfect
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int Left_s = 0, Right_s = 0;

	if (tree->left && tree->right)
	{
		Left_s = 1 + tree_is_perfect(tree->left);
		Right_s = 1 + tree_is_perfect(tree->right);
		if (Right_s == Left_s && Right_s != 0 && Left_s != 0)
			return (Right_s);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect and 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int Is_It = 0;

	if (!tree)
		return (0);

	Is_It = tree_is_perfect(tree);
	if (Is_It != 0)
		return (1);
	return (0);

}
