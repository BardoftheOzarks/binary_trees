#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a binary tree node to the left
 * @parent: parent node
 * @value: value to set at node
 * Return: Pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);
	new->n = value;
	new->left = parent->left;
	if (parent->left != NULL)
		parent->left->parent = new;
	parent->left = new;
	new->parent = parent;
	return (new);
}
