#include "binary_trees.h"

/**
 * binary_tree_uncle - function to find the uncle of the node
 * @node: the node to search the uncle
 * Return: uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent
		|| !node->parent)
		return (NULL);
	if (node->parent->parent && node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
