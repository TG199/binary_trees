#include "binary_trees.h"

/**
 * recursive_size - count size recursively
 * @tree: pointer to root of tree
 *
 * Return: count
 */
size_t recursive_size(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (recursive_size(tree));
}

/**
 * binary_tree_size - Measure the size of binary tree
 * @tree: root node of tree
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	left = recursive_size(tree->left) + 1;
	right = recursive_size(tree->right) + 1;

	return (left + right + 1);
}
