#include "binary_trees.h"

/**
 * array_to_bst - builds a binary search tree from an array
 *
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * Return: pointer to the root node of the BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree;
	size_t elem;

	tree = NULL;
	elem = 0;
	while (elem < size)
	{
		bst_insert(&tree, array[elem]);
		elem++;
	}

	if (elem == size)
		return (tree);

	return (NULL);
}
