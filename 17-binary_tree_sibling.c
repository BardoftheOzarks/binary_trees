#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling
* @node: bode to find its sibling
* Return: returns sibling node or null
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	if (node->parent->right->n == node->n)
		return (node->parent->left);
	return (NULL);
}
