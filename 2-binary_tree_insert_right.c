#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: returns a new node on success
 * NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new = malloc(sizeof(binary_tree_t));
		if (new == NULL)
			return (NULL);
		new->n = value;
		new->left = NULL;
		parent->right->parent = new;
		new->right = parent->right;
		new->parent = parent;
		parent->right = new;
	}
	if (parent->right == NULL)
	{
		new = malloc(sizeof(binary_tree_t));
		if (new == NULL)
			return (NULL);
		new->n = value;
		new->left = NULL;
		new->right = parent->right;
		new->parent = parent;
		parent->right = new;
	}
	return (new);
}

