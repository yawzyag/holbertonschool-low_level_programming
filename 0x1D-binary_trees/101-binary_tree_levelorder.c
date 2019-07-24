#include "binary_trees.h"

int height(const binary_tree_t* tree) 
{ 
    if (tree==NULL) 
        return 0; 
    else
    { 
        /* compute the height of each subtree */
        int l_h = height(tree->left); 
        int r_h = height(tree->right); 
  
        /* use the larger one */
        if (l_h > r_h) 
            return(l_h+1); 
        else return(r_h+1); 
    } 
} 
  

void print_lvl(const binary_tree_t* tree, int level,  void (*func)(int)) 
{ 
    if (tree == NULL) 
        return; 
    if (level == 1) 
        func(tree->n);
    else if (level > 1) 
    { 
        print_lvl(tree->left, level-1, func); 
        print_lvl(tree->right, level-1, func); 
    } 
} 
/**
 * binary_tree_levelorder -
 *
 * Return: 
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = height(tree);
	int i;
	for (i = 1; i <= h; i++)
		print_lvl(tree, i, func);
}