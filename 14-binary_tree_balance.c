#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height or 0
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t Left = 0;
	size_t Right = 0;

	if (!tree)
		return (0);

	Left = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
	Right = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;

	return ((Left > Right) ? Left : Right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the balance factor or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t Left_h, Right_h;

	if (!tree)
		return (0);
	if (tree->left)
		Left_h = binary_tree_height(tree->left);
	if (tree->right)
		Right_h = binary_tree_height(tree->right);

	return ((int)(Left_h - Right_h));
}
