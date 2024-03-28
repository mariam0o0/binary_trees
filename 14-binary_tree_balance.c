#include "binary_trees.h"

/**
 * binary_tree_height_b - measures height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height or 0
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t Left_h = 0;
	size_t Right_h = 0;

	if (!tree)
		return (0);

	if (tree)
	{
		Left_h = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
		Right_h = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
	}

	return ((Left_h > Right_h) ? Left_h : Right_h);

}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int Right = 0, Left = 0;

	if (tree)
	{
		Left = ((int)binary_tree_height_b(tree->left));
		Right = ((int)binary_tree_height_b(tree->right));
	}

	return (Left - Right);
}
