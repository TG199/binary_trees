#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = 0;
	right_height = 0;

	binary_tree_height(tree->left);
	left_height++;
	binary_tree_height(tree->right);
	right_height++;

	if (left_height >= right_height)
		return (left_height);
	else
		return (right_height);
}
