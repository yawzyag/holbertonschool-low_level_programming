#include "binary_trees.h"

/**
 * binary_tree_rotate_left -
 *
 * Return: 
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *p, *temp;

	if (!tree && !tree->left)
		return (NULL);
	p = tree->right;
	p->parent = NULL;
	if (p->left)
	{
		temp = p->left;
		tree->right = temp;
		temp->parent = tree;
	}
	else
		tree->right = NULL;

	tree->parent = p;
	p->left = tree;

	return (p);
}