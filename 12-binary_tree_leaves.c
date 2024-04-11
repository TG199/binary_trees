#include "binary_trees_h"


/**
 * binary_tree_leaves - Count leaves
 * @tree: pointer to root node
 *
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_leaves(tree->left) &&
			binary_tree_leaves(tree->right) + 1);
}
