#include "binary_trees.h"
/**
 * binary_tree_delete - binary_tree_preorder
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int conf = 1;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL && tree->right == NULL) ||
	    (tree->left == NULL && tree->right != NULL) )
		return (0);
	if (tree->left != NULL)
		conf = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		conf = binary_tree_is_full(tree->right);
	return (conf);
}
