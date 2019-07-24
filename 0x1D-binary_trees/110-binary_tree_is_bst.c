#include "binary_trees.h"
#include <limits.h>

int recursive_check(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n <= min || tree->n >= max)
		return (0);
	return recursive_check(tree->left, min, tree->n) &&
	       recursive_check(tree->right, tree->n, max);
}

/**
 * binary_tree_is_bst -
 *
 * Return: 
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int max = INT_MAX;
	int min = INT_MIN;

	if (!tree)
		return (0);

	return recursive_check(tree, min, max);
}