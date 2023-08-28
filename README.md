# Binary-search-tree-realization

## About
This is a custom implementation of the binary search tree data structure library with basic operations of initialization, inserting and binary tree traversal.
***

## Library

The binary search tree nodes are implemented as a structure that contains a value of an element and pointers to the left and right descendants. To work with it, it is necessery to store pointer to the root (the first) element.

* The initialization function takes an element, creates a pointer to a binary search tree node, stores the value of the element in it, puts NULL as pointers to the left and right elements and returns a pointer to the node.

* The insert function takes the address of the root and the value of the new element. A new node corresponding to the value of the new element is initialized in the function. Next, based on the rule that there are smaller elements on the left and larger ones on the right than in the node, the search for the parent element of the new element is performed. New node becomes a left or right child of the found parent.

* Binary tree traversal can be done in three ways:

    * _infix_<br>
    The function gets the address of the root of the tree and outputs first the left subtree, then the root and at the end the right subtree.
    * _prefix_<br>
    The function gets the address of the root of the tree and outputs first the root, then the left subtree and at the end the right subtree.
    * _postfix_<br>
    The function gets the address of the root of the tree and outputs first the left subtree, then the right subtree and at the end the  root.
    