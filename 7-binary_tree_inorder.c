#include "binary_trees.h"
/**
* binary_tree_inorder - list all values inorder
* @tree: tree to have stuff done to it
* @func: function to do things to tree
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
