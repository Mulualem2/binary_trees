#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function that counts the nodes with at least 1 child
 * @tree: pointer ot the root node of the tree to count numbr of nodes
 * Return: number of nodes with at least one child or
 * If tree is NULL, the function must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
