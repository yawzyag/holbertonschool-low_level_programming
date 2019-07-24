#include "binary_trees.h"

/**
 * binary_tree_insert_right - funtion to insert into the right
 * @parent: the parent node
 * @value: the value of the new node
 * Return: return the nes node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!new || !parent)
		return (NULL);

	new->n = value;
	new->right = parent->right;
	new->parent = parent;
	if (parent->right)
		parent->right->parent = new;
	new->left = NULL;
	parent->right = new;

	return (new);
}
