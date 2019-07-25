#include "binary_trees.h"
int binary_tree_is_bst4(const binary_tree_t *tree, const binary_tree_t *tree2
			, int value);



int binary_tree_is_bst5(const binary_tree_t *tree, const binary_tree_t *tree2
			, int value)
{
	if (tree == NULL || tree2 == NULL)
		return (0);
	if (value <= tree->n)
		return (0);
	if (tree != tree2)
	{
		if (tree == tree->parent->left)
			return(binary_tree_is_bst4(tree->parent, tree2, value));
		if (tree == tree->parent->right)
			return(binary_tree_is_bst5(tree->parent, tree2, value));
	}
	return(1);
}


int binary_tree_is_bst4(const binary_tree_t *tree, const binary_tree_t *tree2
			, int value)
{
	if (tree == NULL || tree2 == NULL)
		return (0);
	if (value >= tree->n)
		return (0);
	if (tree != tree2)
	{
		if (tree == tree->parent->left)
			return(binary_tree_is_bst4(tree->parent, tree2, value));
		if (tree == tree->parent->right)
			return(binary_tree_is_bst5(tree->parent, tree2, value));
	}
	return(1);
}

int binary_tree_is_bst3(const binary_tree_t *tree, const binary_tree_t *tree2)
{
	if (tree == NULL || tree2 == NULL)
		return (0);

	if (tree->left != NULL)
	{
		if(binary_tree_is_bst3(tree->left, tree2) == 0)
			return (0);
	}

	if (tree->right != NULL)
	{
		if (binary_tree_is_bst3(tree->right, tree2) == 0)
			return(0);
	}

	if (tree != tree2)
	{
		if (tree == tree->parent->left)
			return(binary_tree_is_bst4(tree->parent, tree2, tree->n));
		if (tree == tree->parent->right)
			return(binary_tree_is_bst5(tree->parent, tree2, tree->n));
	}
	return (1);
}


/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 *
 *@tree: pointer to the root node of the tree to traverse
 *
 *Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst2(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		if (tree->left != NULL)
		{
			if (tree->n > tree->left->n)
				binary_tree_is_bst2(tree->left);
			else
				return (0);
		}

		if (tree->right != NULL)
		{
			if (tree->n < tree->right->n)
				binary_tree_is_bst2(tree->right);
			else
				return (0);

		}
		return (1);
	}
}

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int flag = 0, flag1 = 0;

	if (tree == NULL)
		return (0);
	flag = binary_tree_is_bst2(tree);
	flag1 = binary_tree_is_bst3(tree, tree);
	if (flag == 1 && flag1 == 1)
		return (1);
	return (0);
}
