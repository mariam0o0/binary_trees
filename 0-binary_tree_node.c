#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node;

	New_node = malloc(sizeof(binary_tree_t));
	if (!New_node)
		return (NULL);

	New_node->n = value;
	New_node->parent = parent;
	New_node->right = NULL;
	New_node->left = NULL;
	return (New_node);
}
