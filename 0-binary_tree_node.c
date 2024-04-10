#include "binary_trees.h"
/**
 * binary_tree_node - create binary tree
 * @parent: pointer to root node of tree
 * @value: data of node
 *
 * Return: parent node on SUCCESS, NULL on FAILURE
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!parent)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
