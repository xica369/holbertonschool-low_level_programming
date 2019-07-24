#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a root
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	return (0);
}
