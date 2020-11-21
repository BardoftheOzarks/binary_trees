#include "binary_trees.h"
size_t bH(const binary_tree_t *tree);
/**
*
*
*
*
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h;
	int ans;
	const binary_tree_t *nav = tree;

	while (nav->parent != NULL)
		nav = nav->parent;

	h = bH(nav);
	ans = (2^h);
	if (ans == 0)
		return (1);
	return (0);
}
/**
* bH - gets the height of the tree
* @tree: tree to get height
* Return: height of tree
*/
size_t bH(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + bH(tree->left) : 0;
	height_r = tree->right ? 1 + bH(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
