#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 *
 * @tree: tree root
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	new = tree->right;

	if (new->left)
	{
		tree->right = new->left;
		new->left->parent = tree;
	}
	else
	{
		tree->right = NULL;
	}

	new->left = tree;
	new->parent = tree->parent;
	tree->parent = new;

	return (new);
}
