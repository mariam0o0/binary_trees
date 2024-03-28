#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *N1, *N2;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	N1 = first->parent;
	N2 = second->parent;
	if (!N1 || !first || (!N1->parent && N2))
		return (binary_trees_ancestor(first, N2));

	else if (!N2 || !N1 || (!N2->parent && N1))
		return (binary_trees_ancestor(N1, second));

	return (binary_trees_ancestor(N1, N2));
}
