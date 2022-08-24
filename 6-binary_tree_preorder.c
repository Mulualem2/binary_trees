#include "binary_trees.h"

/**
 * binary_tree_preorder - print binary tree preorder
 * @tree: input entire tree
 * @func: input print function
 * Return: void function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
