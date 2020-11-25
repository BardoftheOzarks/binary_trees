#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling
* @node: bode to find its sibling
* Return: returns sibling node or null
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node)
		if (node->parent)
		{
			if (node->parent->left && node->parent->right)
			{
				if (node->parent->left == node)
					return (node->parent->right);
				if (node->parent->right == node)
					return (node->parent->left);
			}
	return (NULL);
}
