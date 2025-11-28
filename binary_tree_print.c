#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Original binary_tree_print function */
void binary_tree_print(const binary_tree_t *tree)
{
    char *s;
    int t;

    if (!tree)
        return;
    s = "()";
    t = tree->n;
    printf("(%d)", t);
    if (tree->left || tree->right)
    {
        if (tree->left)
        {
            printf(" -> ");
            binary_tree_print(tree->left);
        }
        else
            printf("%s", s);
        if (tree->right)
        {
            printf(" -> ");
            binary_tree_print(tree->right);
        }
        else
            printf("%s", s);
    }
}
