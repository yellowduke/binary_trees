#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a binary node
 * @parent: a pointer points to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: returns a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/**
	 * creation and allocate memory to a new node;
	 * assign it a value and set the children
	 * node to NULL;
	 * then return the new node
	 */
	binary_tree_t *new_nd;

	new_nd = malloc(sizeof(binary_tree_t));

	if (!new_nd)
	{
		return (NULL);
	}
	new_nd->n = value;
	new_nd->parent = parent;
	new_nd->left = NULL;
	new_nd->right = NULL;
	return (new_nd);
}
