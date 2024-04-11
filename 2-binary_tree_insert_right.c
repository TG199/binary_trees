#include "binary_trees.h"

/**
 * binary_tree_insert_right - insight right sub-tree
 * @parent:  pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the newly created node or NULL on fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = n;
	new->left = NULL;
	new->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new;
	parent->right = new;

	return (new);
}
