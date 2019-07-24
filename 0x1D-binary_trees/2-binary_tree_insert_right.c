#include "binary_trees.h"

/**
 * binary_tree_insert_right - funtion to insert into the right
 * @parent: the parent node
 * @value: the value of the new node
 * Return: return the nes node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;

	return (new);
}
