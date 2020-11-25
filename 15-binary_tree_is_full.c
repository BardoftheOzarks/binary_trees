#include "binary_trees.h"
/**
* binary_tree_is_full - checks if tree is full
* @tree: tree to check
* Return: returns if full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height_l;
	int height_r;
	int ans;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_is_full(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_is_full(tree->right) : 0;
	ans = height_l - height_r;
	if (ans == 0)
		return (1);
	else
		return (0);
}
