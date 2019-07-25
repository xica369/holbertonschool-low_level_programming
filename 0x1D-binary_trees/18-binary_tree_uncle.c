#include "binary_trees.h"

/**
 * binary_tree_t - finds the sibling of a node
 *
 * Return: pointer to the sibling node else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->right)
		return(node->parent->left);
	return(node->parent->right);
}

/**
 6 * binary_tree_uncle - finds the uncle of a node
 7 *
 8 * Return: pointer to the uncle node else NULL
 9 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
