#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root
 * @node: input node to check
 * Return: 1 if is a root 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
