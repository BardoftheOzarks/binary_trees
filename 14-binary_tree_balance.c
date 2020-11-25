#include "binary_trees.h"
int bL(const binary_tree_t *tree);
/**
* binary_tree_balance - gets the balnce factor of a node
* @tree: node to get balancefactor from
* Return: returns balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (tree == NULL)
		return (0);
	height_l = bL(tree->left);
	height_r = bL(tree->right);
	return (height_l - height_r);
}
/**
* bL - copy of task 12 algo
* @tree: node to check leaves
* Return: number of leaves
*/
int bL(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (bL(tree->left)
		+ bL(tree->right));
}
