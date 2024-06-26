#include "binary_trees.h"

/**
 * recursive_height - function that measures the height of a binary tree
 * @tree:pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree
 */
size_t recursive_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = 0;
	right_height = 0;

	left_height = recursive_height(tree->left);
	right_height = recursive_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
 * binary_tree_height - calls recursive height to return height
 * @tree: tree hight
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (recursive_height(tree) - 1);
}
