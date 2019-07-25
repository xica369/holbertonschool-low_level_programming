#include "binary_trees.h"



/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 *
 *@tree: pointer to the root node of the tree to traverse
 *
 *Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (0);
	{
		if (tree->left != NULL)
			binary_tree_is_bst(tree->left);
		

		if (tree->right != NULL)
			binary_tree_is_bst(tree->right);

		if (
	}
}
