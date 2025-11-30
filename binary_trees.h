#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree); /* Add this line */
size_t binary_tree_height(const binary_tree_t *tree); /* Add this line if missing */
size_t binary_tree_size(const binary_tree_t *tree); /* Add this line if missing */

#endif /* BINARY_TREES_H */
