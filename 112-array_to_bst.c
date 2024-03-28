#include "binary_trees.h"

/**
 * array_to_bst -  builds a Binary Search Tree from an array
 * @array: the first element of the array to be converted
 * @size: the number of element in the array
 * Return: pointer to the root node of the BST, or NULL
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			bst_insert(&root, array[i]);
		else
			bst_insert(&root, array[i]);
	}

	return (root);
}
