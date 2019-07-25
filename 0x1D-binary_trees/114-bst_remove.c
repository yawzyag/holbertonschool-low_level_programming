#include "binary_trees.h"

/**
 * bst_remove - remove node
 * @root: root of the tree
 * @value: value to remove
 * Return: tree root
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp, *succ;

	if (!root)
		return (root);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left != NULL && root->right != NULL)
		{
			succ = root->right;
			while (succ->left)
				succ = succ->left;
			root->n = succ->n;
			root->right = bst_remove(root->right, succ->n);
		}
		else
		{
			tmp = root;
			if (root->left != NULL)
				root = root->left;
			else if (root->right != NULL)
				root = root->right;
			else
				root = NULL;
		}
	}
	return root;
}