#include "binary_tree.h"

/**
 * binary_tree_size - Measure the size of binary tree
 * @tree: root node of tree
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size++;
	binary_tree_preorder(tree->left);
	binary_tree_preorder(tree->right);
}
