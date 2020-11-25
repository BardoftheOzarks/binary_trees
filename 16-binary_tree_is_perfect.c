#include "binary_trees.h"
size_t bH(const binary_tree_t *tree);
size_t bS(const binary_tree_t *tree);
size_t bL(const binary_tree_t *tree);
/**
* binary_tree_is_perfect - checks if perfect
* @tree: tree to check
* Return: 1 if perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, tn;
	const binary_tree_t *nav = tree;

	if (tree == NULL)
		return (0);

	while (nav->parent != NULL)
		nav = nav->parent;

	h = (bH(nav) * 2);
	tn = bL(nav);
	if (h == tn)
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
/**
 * bL - counts the leaves on a binary tree
 * @tree: tree to count
 * Return: number of leaves
 */
size_t bL(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (bL(tree->left)
		+ bL(tree->right));
}
/**
 * bS - measures size of a binary tree
 * @tree: root of tree to be measured
 * Return: number of nodes in tree
 */
size_t bS(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (bS(tree->left) + 1
		+ bS(tree->right));
}
