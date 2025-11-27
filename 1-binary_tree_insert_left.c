#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Check if parent is NULL */
    if (parent == NULL)
        return (NULL);

    /* Create new node */
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    /* If parent already has a left child */
    if (parent->left != NULL)
    {
        /* Set the old left child as left child of new node */
        new_node->left = parent->left;
        /* Update the parent pointer of the old left child */
        parent->left->parent = new_node;
    }

    /* Set new node as left child of parent */
    parent->left = new_node;

    return (new_node);
}
