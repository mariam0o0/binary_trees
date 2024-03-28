#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to the root node of the BST to search
 * @value: the value to search in the tree
 * Return: pointer to the node with the vlaue or NULL
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node;

	if (!tree)
		return (NULL);

	if (value < tree->n)
		node = bst_search(tree->left, value);

	else if (value > tree->n)
		node = bst_search(tree->right, value);

	else if (value == tree->n)
		return ((bst_t *)tree);

	else
		return (NULL);

	return (node);
}
