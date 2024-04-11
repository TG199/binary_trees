#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf node
 * @node: pointer to node
 *
 * Return: 1 if leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}

