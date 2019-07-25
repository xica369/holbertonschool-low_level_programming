#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int cont1 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (cont1 + 1);

	if (tree->left != NULL)
		cont1 += binary_tree_leaves(tree->left);

	if (tree->right != NULL)
		cont1 += binary_tree_leaves(tree->right);

	return (cont1);
}
