#include "binary_trees.h"
/**
 * binary_tree_size - measures size of a binary tree
 * @tree: root of tree to be measured
 * Return: number of nodes in tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;
	return (binary_tree_size(tree->left) + 1
		+ binary_tree_size(tree->right));
}
