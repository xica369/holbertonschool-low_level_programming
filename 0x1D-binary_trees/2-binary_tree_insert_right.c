#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 *@parent: pointer to parent of the new node
 *@value: value to save in n
 *
 * Return: a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	if (parent == NULL)
		return (NULL);

	nodo = calloc(1, sizeof(binary_tree_t));
	if (nodo == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = nodo;
		nodo->parent = parent;
		nodo->n = value;
		nodo->right = NULL;
		nodo->left = NULL;
	}
	else
	{
		nodo->right = parent->right;
		parent->right->parent = nodo;
		parent->right = nodo;
		nodo->n = value;
		nodo->parent = parent;
		nodo->left = NULL;
	}
	return (nodo);
}
