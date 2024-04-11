#include "binary_trees.h"


/**
 * recursive_depth - count depth
 * @tree: pointer to node to measure depth
 *
 * Return: Recursive calls
 */
size_t recursive_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - call recursive depth
 * @tree: pointer to node to measure depth
 *
 * Return:recursive calls
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (recursive_depth(tree));
}
