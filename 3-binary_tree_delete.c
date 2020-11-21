#include "binary_tree.h"
/**
 * binary_tree_delete - deletes and entire binary tree
 * @tree: root node of tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tracer = tree;

	while(tree)
	{
		while(tracer->left)
			tracer = tracer->left;
		while(tracer->right)
			tracer = tracer->right;
		if(!tracer->left && !tracer->right)
		{
			free(tracer);
			tracer = tree;
		}
	}
}
