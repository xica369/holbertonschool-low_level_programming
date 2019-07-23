#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
	{
		return NULL;
	}

	nodo->n = value;
	nodo->left = NULL;
	nodo->right = NULL;
	nodo->parent = parent;

	return (nodo);

}
