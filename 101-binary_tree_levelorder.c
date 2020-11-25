#include "binary_trees.h"
void get_level(const binary_tree_t *tree, int level, void (*func)(int));
/**
 * binary_tree_levelorder - traverses a tree in level order
 * @tree: tree to be traversed
 * @func: function the node value is fed
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (i = 0; i <= height; i++)
		get_level(tree, i, func);
}
/**
 * binary_tree_height - gets the height of the tree
 * @tree: tree to get height
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t height_l;
        size_t height_r;

        if (tree == NULL)
                return (0);
        height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
        height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
        return (height_l > height_r ? height_l : height_r);
}
/**
 * get_level - traverses a tree level
 * @tree: tree to be traversed
 * @level: level to be traversed
 * @func: function to be performed on each node
 */
void get_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		get_level(tree->left, level - 1, func);
		get_level(tree->right, level - 1, func);
	}
}
