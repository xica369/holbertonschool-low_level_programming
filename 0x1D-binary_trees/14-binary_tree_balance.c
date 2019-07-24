#include "binary_trees.h"
size_t binary_tree_balance2(const binary_tree_t *tree);

/**
 * binary_tree_balance2 - measures the balance factor of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: Balance factor
 */

size_t binary_tree_balance2(const binary_tree_t *tree)
{
	int cont1 = 0, cont2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{

		cont1 = binary_tree_balance2(tree->left);
		cont1++;
	}

	if (tree->right != NULL)
	{

		cont2 = binary_tree_balance2(tree->right);
		cont2++;
	}

	return (cont1 - cont2);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: Balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	return (binary_tree_balance2(tree));
}
