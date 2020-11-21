#include "binary_trees.h"
/**
*
*
*
*
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	if (node->parent->right->n == node->n)
		return (node->parent->left);
	return (NULL);
}
