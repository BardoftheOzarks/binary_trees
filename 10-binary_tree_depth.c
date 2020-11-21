#include "binary_trees.h"
/**
 * binary_tree_depth - counts the depth of a node in a tree
 * @tree: node to be measured
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int count = 0;

	if (tree)
		while (tree->parent != NULL)
		{
			tree = tree->parent;
			count += 1;
		}
	return (count);
}
