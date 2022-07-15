#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree or if tree is NULL returns 0.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t right_side = 0, left_side = 0;

        if (tree == NULL)
                return (0);
        else
        {
                left_side = binary_tree_height(tree->left);
                right_side = binary_tree_height(tree->right);

                if (left_side >= right_side)
                        return (left_side + 1);
                else
                        return (right_side + 1);
        }
}