#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count
 * 
 * Return: Number of nodes with at least 1 child, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* Check if current node has at least one child */
    if (tree->left != NULL || tree->right != NULL)
    {
        /* Count this node and recursively count in left and right subtrees */
        return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
    }
    
    /* If no children, just recursively count in subtrees */
    return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
