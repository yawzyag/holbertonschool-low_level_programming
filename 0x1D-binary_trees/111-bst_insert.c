#include "binary_trees.h"

bst_t *insert(bst_t **tree, bst_t *padre, int value)
{

	if (!*tree)
		*tree = binary_tree_node(padre, value);
	else if (value < (*tree)->n)
		insert(&(*tree)->left, *tree, value);
	else if (value > (*tree)->n)
		insert(&(*tree)->right, *tree, value);
	else
		*tree = NULL;
	return (*tree);
}
/**
 * bst_insert -
 *
 * Return: 
 */
bst_t *bst_insert(bst_t **tree, int value)
{	
	return(insert(tree, NULL, value));
}

