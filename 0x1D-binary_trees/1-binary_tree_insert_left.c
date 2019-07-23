#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * Return: a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = nodo;
		nodo->n = value;
		nodo->right = NULL;
		nodo->left = NULL;
	}
	else
	{
		nodo->left = parent->left;
		parent->left->parent = nodo;
		parent->left = nodo;
		nodo->n = value;
		nodo->parent = parent;
		nodo->right = NULL;
	}
	return (nodo);
}
