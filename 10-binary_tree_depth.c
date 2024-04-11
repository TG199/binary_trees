#include "binary_trees.h"


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = 0;

	binary_tree_depth(tree);
	depth++;

	return (depth);
}
