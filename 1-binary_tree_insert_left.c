#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node.
 * @parent: Parent of the node to create.
 * @value: Value of the new node.
 *
 * Return: Pointer to a new node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child.
 * @value: Value of the new node.
 *
 * Return: Pointer to the new node.
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (parent == NULL)
		return (NULL);
	
	left_node = binary_tree_node(parent, value)

	if (left_node == NULL)
		return (NULL);
	
	if (parent->left == NULL)
		parent->left = left_node;
	else
		left_node->left->parent = left_node;

	return (left_node);
}