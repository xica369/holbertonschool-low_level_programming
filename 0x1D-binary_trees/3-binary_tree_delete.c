#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tempo, *left, *right;


	if (tree == NULL)
		return;
	tempo = tree;
	left = tree->left;
	right = tree->right;
	free(tempo);
	if (left != NULL)
		binary_tree_delete(left);
	if (right != NULL)
		binary_tree_delete(right);
}
