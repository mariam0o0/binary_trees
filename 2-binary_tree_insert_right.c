#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node;

	if (!parent)
		return (NULL);

	New_node = binary_tree_node(parent, value);
	if (!New_node)
		return (NULL);

	if (parent->right)
	{
		New_node->right = parent->right;
		parent->right->parent = New_node;
	}

	parent->right = New_node;
	return (New_node);
}
