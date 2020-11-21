#include "binary_trees.h"
/**
*
*
*
*
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (height_l - height_r);
}
