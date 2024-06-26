#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of binary tree
 * @tree: root node of tree
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
