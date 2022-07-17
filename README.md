# Welcome to Our Binary Trees Project

<img src= "https://blog.holbertonschool.com/wp-content/uploads/2020/04/unnamed-2.png" width= 39% >

# Functions

``````
0. New node - binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
1. Insert left - binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
2. Insert right - binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
3. Delete - void binary_tree_delete(binary_tree_t *tree);
4. Is leaf - int binary_tree_is_leaf(const binary_tree_t *node);
5. Is root - int binary_tree_is_root(const binary_tree_t *node);
6. Pre-order traversal - void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
7. In-order traversal - void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
8. Post-order traversal - void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
9. Height - size_t binary_tree_height(const binary_tree_t *tree);
10. Depth - size_t binary_tree_depth(const binary_tree_t *tree);
11. Size - size_t binary_tree_size(const binary_tree_t *tree);
12. Leaves - size_t binary_tree_leaves(const binary_tree_t *tree);
13. Nodes - size_t binary_tree_nodes(const binary_tree_t *tree);
14. Balance factor - int binary_tree_balance(const binary_tree_t *tree);
15. Is full - int binary_tree_is_full(const binary_tree_t *tree);
16. Is perfect - int binary_tree_is_perfect(const binary_tree_t *tree);
17. Sibling - binary_tree_t *binary_tree_sibling(binary_tree_t *node);
18. Uncle - binary_tree_t *binary_tree_uncle(binary_tree_t *node);
29. Big O #BST
35. Big O #AVL Tree
41. Big O #Binary Heap
``````

# Data Structures - Basic Binary Tree

``````
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
``````

# Data Structures - Binary Search Tree
``````
typedef struct binary_tree_s bst_t;
``````

# Data Structures - AVL Tree
``````
typedef struct binary_tree_s avl_t;
``````

# Data Structures - Max Binary Heap
``````
typedef struct binary_tree_s heap_t;
``````

# Print Function
This function was only used for visualization purposes

[Print Function](https://github.com/holbertonschool/0x1C.c)


# Style
Our code should use the **Betty** style, and it will be checked using:

[betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")
[betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")

# Authors
[Mateo Arbini](https://www.linkedin.com/in/mateo-arbini-1493691a8/)
[Juan Manuel Reyes](https://www.linkedin.com/in/juanma-reyess/)

Holberton School Cohort 17
