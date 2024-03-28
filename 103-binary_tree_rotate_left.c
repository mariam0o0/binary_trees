#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *New_n;

	if (!tree || !(tree->right))
		return (NULL);

	New_n = tree->right;
	tree->right = New_n->left;
	if (New_n->left != NULL)
		New_n->left->parent = tree;

	New_n->left = tree;
	New_n->parent = tree->parent;
	tree->parent = New_n;
	return (New_n);
}
