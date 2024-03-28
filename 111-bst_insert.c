#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST
 * @value: he value to store in the node
 * Return: pointer to the created node, or NULL
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *New_n, *temp;
	binary_tree_t *aux;

	if (!tree)
		return (NULL);
	if (!(*tree))
	{
		aux = binary_tree_node((binary_tree_t *)(*tree), value);
		New_n = (bst_t *)aux;
		*tree = New_n;
	}
	else
	{
		temp = *tree;
		if (value < temp->n)
		{
			if (temp->left)
				New_n = bst_insert(&temp->left, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				New_n = temp->left = (bst_t *)aux;
			}
		}
		else if (value > temp->n)
		{
			if (temp->right)
				New_n = bst_insert(&temp->right, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				New_n = temp->right = aux;
			}
		}
		else
			return (NULL);
	}
	return (New_n);
}
