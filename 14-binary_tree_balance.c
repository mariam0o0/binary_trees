#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height or 0
 */

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t Left = 0;
	size_t Right = 0;

	if (!tree)
		return (0);

	Left = tree->left ? 1 + binary_tree_height_balance(tree->left) : 1;
	Right = tree->right ? 1 + binary_tree_height_balance(tree->right) : 1;

	return ((Left > Right) ? Left : Right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the balance factor or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int Right_h = 0, Left_h = 0;

	if (tree)
	{
		Left_h = ((int)binary_tree_height_b(tree->left));
		Right_h = ((int)binary_tree_height_b(tree->right));
	}
	return (Left_h - Right_h);
}
