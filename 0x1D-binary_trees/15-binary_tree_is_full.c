#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 *@tree: pointer to tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int conf = 0, conf2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		conf = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		conf2 = binary_tree_is_full(tree->right);
	return (conf && conf2);
}
