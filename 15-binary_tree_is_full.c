#include "binary_trees.h"
/**
*
*
*
*
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height_l;
	int height_r;
	int ans;

	height_l = tree->left ? 1 + binary_tree_is_full(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_is_full(tree->right) : 0;
	ans = height_l - height_r;
	if (ans == 0)
		return (1);
	else
		return (0);
}
