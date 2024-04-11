#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary tree
 * @tree: tree to delete
 *
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	binary_tree_delete(tree->left);
	binary_tree_detete(tree->right);

	free(tree);
}
