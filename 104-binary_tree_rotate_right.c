#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  performs a right-rotation on a tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *New_n;

	if (!tree || !(tree->left))
		return (NULL);

	New_n = tree->left;
	tree->left = New_n->right;
	if (New_n->right)
		New_n->right->parent = tree;

	New_n->right = tree;
	New_n->parent = tree->parent;
	tree->parent = New_n;
	return (New_n);
}
