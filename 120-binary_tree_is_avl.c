#include "binary_trees.h"

/**
 * recursive_height - measures the height of a binary tree
 *
 * @tree: tree root
 * Return: height
 */
size_t recursive_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = recursive_height(tree->left);
	right = recursive_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * is_leaf - checks if a node is a leaf
 *
 * @tree: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int is_leaf(const binary_tree_t *tree)
{
	int leaf = 0;

	if (tree && !(tree->left) && !(tree->right))
		leaf = 1;

	return (leaf);
}

/**
 * check_parent - checks if node has a lower/higher than its grand parent
 *
 * @tree: actual node
 * Return: 1 if actual node has an appropiartely value, 0 otherwise
 */
int check_parent(const binary_tree_t *tree)
{
	const binary_tree_t *prt;
	const binary_tree_t *grd_prt;

	if (tree == NULL || tree->parent == NULL || tree->parent->parent == NULL)
		return (1);

	prt = tree->parent;
	grd_prt = prt->parent;

	while (prt && grd_prt)
	{
		if (prt->n < grd_prt->n && tree->n >= grd_prt->n)
			return (0);

		if (prt->n > grd_prt->n && tree->n <= grd_prt->n)
			return (0);

		prt = prt->parent;
		grd_prt = prt->parent;
	}

	return (1);
}

/**
 * check_is_bst - checks if binary tree is a BST
 *
 * @tree: tree root
 * Return: 1 if tree is a BST, 0 otherwise
 */
int check_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->left && tree->left->n >= tree->n)
		return (0);

	if (tree->right && tree->right->n <= tree->n)
		return (0);

	if (!check_parent(tree->left) || !check_parent(tree->right))
		return (0);

	return (check_is_bst(tree->left) && check_is_bst(tree->right));
}

/**
 * binary_tree_is_avl - checks if tree is AVL
 *
 * @tree: tree root
 * Return: 1 if tree is a AVL, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree && check_is_bst(tree) &&
	    (recursive_height(tree->left) - recursive_height(tree->right) == 0))
	{
		return (1);
	}

	return (0);
}
