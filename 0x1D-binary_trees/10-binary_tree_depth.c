#include "binary_trees.h"

/**
 * binary_tree_depth - function to mesure the depht
 * @tree: tree
 * Return: return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
