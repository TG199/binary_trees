#include "binary_trees.h"

/**
 * is_leaf - check if node is leaf
 * @tree: pointer to node to check
 *
 * Return: 1 if leaf, 0 if not
 */

int is_leaf(const binary_tree_t *tree)
{
	int leaf = 0;

	if (tree && !(tree->left) && !(tree->right))
		leaf = 1;
	return (leaf);
}

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

	if (is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
