#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to node on SUCCESS, NULL on FAILURE
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value
	new->left = parent->right
	new->right = NULL

	if (parent->left != NULL)
		parent->left->parent = new;
	parent->left = new;

	return (new);

}
