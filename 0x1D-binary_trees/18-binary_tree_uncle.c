#include "binary_trees.h"

/**
 * binary_tree_uncle - function to find the uncle of the node
 * @node: the node to search the uncle
 * Return: uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *f;

	if (!node || !node->parent->parent
		|| !node->parent)
		return (NULL);
	f = node->parent;
	if (f->parent && f == f->parent->right)
		return (f->parent->left);
	else
		return (f->parent->right);
}
