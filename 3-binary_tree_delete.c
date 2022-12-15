#include "binary_trees.h"
void free_child(binary_tree_t *child);

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: returns void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_t *head;

	head = tree;
	free_child(head->left);
	free_child(head->right);
	free(tree);
}
/**
 * free_child - frees child node
 * @temp: pointer to child node
 *
 * Return: returns void
 */
void free_child(binary_tree_t *temp)
{

	if (temp != NULL)
	{
		free_child(temp->left);
		free_child(temp->right);
		free(temp);
	}
}
