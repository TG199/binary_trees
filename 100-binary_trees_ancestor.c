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
		return (-1);

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
/**
 * binary_trees_ancestor -finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: Lowest common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	if (binary_tree_depth(first) > binary_depth(second))
		return (binary_trees_ancestor(first->parent, second));

	if (binary_tree_depth(first) < binary_tree_depth(second))
		return (binary_trees_ancestor(first, second->parent));
	return (binary_trees_ancestor(first->parent, scond->parent));
}
