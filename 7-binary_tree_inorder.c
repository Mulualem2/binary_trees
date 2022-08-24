#include "binary_trees.h"

/**
 * binary_tree_inorder - print binary tree inorder
 * @tree: input entire tree
 * @func: input print function
 * Return: void function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
