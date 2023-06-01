#include "binary_trees.h"

/**
 * binary_tree_insert_left - This is a function that
 * inserts a node as the left-child of another node
 * @parent: a pointer will point to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: returns a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nd;

	if (!parent)
	{
		return (NULL);
	}
	new_nd = malloc(sizeof(binary_tree_t));

	if (!new_nd)
	{
		return (NULL);
	}
	new_nd->n = value;
	new_nd->parent = parent;
	new_nd->right = NULL;

	if (parent->left != NULL)
	{
		new_nd->left = parent->left;
		parent->left->parent = new_nd;
	}
	else
	{
		new_nd->left = NULL;
	}
	parent->left = new_nd;
	return (new_nd);
}
