#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Simple binary tree printer
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        printf("(null)\n");
        return;
    }
    
    printf("       .-------(%03d)-------.\n", tree->n);
    
    if (tree->left != NULL)
    {
        if (tree->left->left != NULL || tree->left->right != NULL)
        {
            printf("  .--(%03d)--.         ", tree->left->n);
        }
        else
        {
            printf("  .--(%03d)              ", tree->left->n);
        }
    }
    else
    {
        printf("                      ");
    }
    
    if (tree->right != NULL)
    {
        if (tree->right->left != NULL || tree->right->right != NULL)
        {
            printf(".--(%03d)--.\n", tree->right->n);
        }
        else
        {
            printf("(%03d)\n", tree->right->n);
        }
    }
    else
    {
        printf("\n");
    }
    
    /* Print the second level */
    if (tree->left != NULL)
    {
        if (tree->left->left != NULL)
        {
            printf("(%03d)     ", tree->left->left->n);
        }
        else
        {
            printf("(nil)     ");
        }
        
        if (tree->left->right != NULL)
        {
            printf("(%03d)     ", tree->left->right->n);
        }
        else
        {
            printf("(nil)     ");
        }
    }
    else
    {
        printf("                ");
    }
    
    if (tree->right != NULL)
    {
        if (tree->right->left != NULL)
        {
            printf("(%03d)     ", tree->right->left->n);
        }
        else
        {
            printf("(nil)     ");
        }
        
        if (tree->right->right != NULL)
        {
            printf("(%03d)", tree->right->right->n);
        }
        else
        {
            printf("(nil)");
        }
    }
    
    printf("\n");
}
