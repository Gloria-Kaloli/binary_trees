# Binary Trees Overview #
The scripts contained in this repository are implementations and operations of a binary tree, binary search tree, avl tree and binary heap.  

## General ##
0. What is a binary tree?  
A binary tree is a data structure where each node has at most two children called a left child and a right child.  If a node has only one child, the other child is pointed to NULL.  If a node doesn't have children, it's called a leaf node.  The nodes are unordered, thus would be slow to search, insert and/or delete.  

1. What is the difference between a binary tree and a Binary Search Tree?  
A Binary Search Tree is an abstract data structure called a container that stores data items to memory.  It could also be considered as a type of binary tree.  The left subtree contains only nodes with keys less than the parent.  The right subtree contains only nodes with keys greater than the parent.  The subtrees themselves must also be a binary search tree.  Since the nodes are ordered, the process of searching, inserting and/or deleting would be faster than a binary tree.  

2. What is the possible gain in terms of time complexity compared to linked lists?  
The travel time in a linked list is longer than a binary tree because every node would be visited.  Meanwhile, there are many possible paths to travel in a binary tree.  The lookup time is the best possible gain in implementing a binary tree rather than a linked.
