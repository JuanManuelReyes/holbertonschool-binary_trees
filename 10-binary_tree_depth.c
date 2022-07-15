#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @node: Pointer to the node to measure the depth of.
 *
 * Return: Depth of a node in a binary tree or if node is NULL return 0.
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
        size_t right_side = 0, left_side = 0;

        if (tree == NULL)
                return (0);
        else
        {
                left_side = binary_tree_depth(tree->left);
                right_side = binary_tree_depth(tree->right);

                if (left_side > right_side)
                        return (left_side + 1);
                else
                        return (right_side + 1);
        }
}