# Cpp-Binary-Search-Tree
# C++ Binary Search Tree (BST) Implementation

## 📌 About the Project
This repository contains a custom, from-scratch implementation of a Binary Search Tree (BST) data structure written in C++. Developed to strengthen fundamental computer science concepts, this project handles dynamic memory allocation, pointer manipulation, and recursive algorithms without relying on the Standard Template Library (STL).

It showcases a deep understanding of how data is structured and manipulated in memory—a critical skill for embedded software engineering and performance-critical applications.

## ⚙️ Core Features
* **Dynamic Node Insertion:** Recursively places new elements in their correct sorted position to maintain the BST properties.
* **Complex Deletion Logic:** Safely removes nodes handling all edge cases:
  * Deleting leaf nodes.
  * Deleting nodes with one child.
  * Deleting nodes with two children (by accurately finding and replacing with the greatest element in the left subtree).
* **Search Algorithm:** Implements an efficient recursive search to locate specific values within the tree structure.
* **Tree Traversals:** Includes recursive functions for tree traversal (`INORDINE` and `PREORDINE`), outputting visually indented structures to represent the hierarchy.

## 🛠️ Tech Stack & Concepts
* **Language:** C++
* **Concepts:** Data Structures (Trees), Dynamic Memory Management (Pointers, `new`, `delete`), Recursion, Algorithmic Complexity.

## 📁 Repository Structure
* `main.cpp` - Contains the complete logic for the Node structure, tree operations, and a standard input loop for real-time testing.
