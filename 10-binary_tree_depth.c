#include "binary_trees.h"


/**
 * binary_tree_depth - count depth of a node
 * @tree: pointer to node to measure depth
 *
 * Return:value of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	depth = 0;
	return (binary_tree_depth(tree->parent) + (depth + 1));
}