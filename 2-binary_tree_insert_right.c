#include "binary_trees.h"

/**
 * binary_tree_insert_right - This is a function that
 * inserts a node as the right-child of another node
 * @parent: a pointer will point to the node to insert the left-child in
 * @value: This is the value to store in the new node
 *
 * Return: returns a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	new_nd->left = NULL;

	if (parent->right != NULL)
	{
		new_nd->right = parent->right;
		parent->right->parent = new_nd;
	}
	else
	{
		new_nd->right = NULL;
	}
	parent->right = new_nd;
	return (new_nd);
}
