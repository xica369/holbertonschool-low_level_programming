#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int cont1 = 0;

	if (tree == NULL)
		return (0);


	if (tree->left != NULL)
		cont1 += binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		cont1 += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
                return (cont1 + 1);


	return (cont1);
}
