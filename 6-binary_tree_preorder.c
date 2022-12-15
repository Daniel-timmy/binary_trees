#include "binar_treess.h"
/**
 * binary_tree_preorder - iterate through a list
 * @func: a function
 * @tree: pointer to the node
 *
 * Return: returns void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

