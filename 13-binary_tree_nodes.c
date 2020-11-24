#include "binary_trees.h"
size_t bL(const binary_tree_t *tree);
size_t bS(const binary_tree_t *tree);
/**
* binary_tree_nodes - returns the number of nodes
* @tree: the number of nodes
* Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (bS(tree) - bL(tree));
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
