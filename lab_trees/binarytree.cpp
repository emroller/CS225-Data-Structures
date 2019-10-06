/**
 * @file binarytree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include "TreeTraversals/InorderTraversal.h"
#include <iostream>

/**
 * @return The height of the binary tree. Recall that the height of a binary
 *  tree is just the length of the longest path from the root to a leaf, and
 *  that the height of an empty tree is -1.
 */
template <typename T>
int BinaryTree<T>::height() const
{
    // Call recursive helper function on root
    return height(root);
}

/**
 * Private helper function for the public height function.
 * @param subRoot
 * @return The height of the subtree
 */
template <typename T>
int BinaryTree<T>::height(const Node* subRoot) const
{
    // Base case
    if (subRoot == NULL)
        return -1;

    // Recursive definition
    return 1 + std::max(height(subRoot->left), height(subRoot->right));
}

/**
 * Prints out the values of the nodes of a binary tree in order.
 * That is, everything to the left of a node will be printed out before that
 * node itself, and everything to the right of a node will be printed out after
 * that node.
 */
template <typename T>
void BinaryTree<T>::printLeftToRight() const
{
    // Call recursive helper function on the root
    printLeftToRight(root);

    // Finish the line
    std::cout << std::endl;
}

/**
 * Private helper function for the public printLeftToRight function.
 * @param subRoot
 */
template <typename T>
void BinaryTree<T>::printLeftToRight(const Node* subRoot) const
{
    // Base case - null node
    if (subRoot == NULL)
        return;

    // Print left subtree
    printLeftToRight(subRoot->left);

    // Print this node
    std::cout << subRoot->elem << ' ';

    // Print right subtree
    printLeftToRight(subRoot->right);
}

/**
 * Flips the tree over a vertical axis, modifying the tree itself
 *  (not creating a flipped copy).
 */
    template <typename T>
void BinaryTree<T>::mirror()
{
    //your code here
    mirror(root);
}

template <typename T>
void BinaryTree<T>::mirror(Node* subRoot) {
	if (subRoot == NULL) {
		return;
	}
	Node* tempR = subRoot->right;
	subRoot->right = subRoot->left;
	subRoot->left = tempR;
	mirror(subRoot->left);
	mirror(subRoot->right);
}

template <typename T>
void BinaryTree<T>::myInOrder(Node* subRoot, std::vector<T>& treeVector) const {
    if(subRoot != NULL){
      myInOrder(subRoot->left, treeVector);
      treeVector.push_back(subRoot->elem);
      myInOrder(subRoot->right, treeVector);
    }
}
template <typename T>
bool BinaryTree<T>::isOrderedIterative() const {
	return isOrderedIterative(root);
}


/**
 * isOrdered() function iterative version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedIterative(Node* subRoot) const
{
    // your code here
    typename std::vector<T> values;
    if(subRoot != NULL){
        myInOrder(subRoot->left, values);
        values.push_back(subRoot->elem);
        myInOrder(subRoot->right, values);
    }
	for (unsigned i = 0; i < values.size() - 1; i++) {
		if (values.at(i) > values.at(i + 1)) {
			return false;
		}
	}
    return true;
}

/**
 * isOrdered() function recursive version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedRecursive() const
{
    // your code here

    return isOrderedRecursive(root, 0, INT_MAX);
}
template <typename T>
bool BinaryTree<T>::isOrderedRecursive(Node* subroot, T min, T max) const {
	if (subroot == NULL) {
		return true;
	}	
	int data = subroot->elem;
	if (data < min || data > max) {
		return false;
	}
	return isOrderedRecursive(subroot->left, min, data) && isOrderedRecursive(subroot->right, data, max);	
}

/**
 * creates vectors of all the possible paths from the root of the tree to any leaf
 * node and adds it to another vector.
 * Path is, all sequences starting at the root node and continuing
 * downwards, ending at a leaf node. Paths ending in a left node should be
 * added before paths ending in a node further to the right.
 * @param paths vector of vectors that contains path of nodes
 */
template <typename T>
void BinaryTree<T>::getPaths(std::vector<std::vector<T>>& paths) const
{
    // your code here
    std::vector<T> vec;
	paths.push_back(vec);
    getPaths(root, paths);
	paths.pop_back();
	for (unsigned i = 0; i < paths.size(); i++) {
		std::cout<<"------------------------"<<std::endl;	
		for(unsigned j = 0; j < paths.at(i).size(); j++) {
			std::cout<<paths.at(i).at(j)<<std::endl;
		}
	}
}

template <typename T>
void BinaryTree<T>::getPaths(Node* subroot, std::vector<std::vector<T>>& paths) const {
	if (subroot == NULL) {
		return;
	}
	
	if ( subroot->left == NULL && subroot->right == NULL) {
		paths.back().push_back(subroot->elem);
		std::vector<T> vec = paths.back();
		vec.pop_back();
		paths.push_back(vec);
		return;
	} else {
		paths.back().push_back(subroot->elem);
		getPaths(subroot->left, paths);
		getPaths(subroot->right, paths);
		paths.back().pop_back();
	}
}

//template <typename T>
//std::vector<T> BinaryTree<T>::addPath(Node* subroot, std::vector<T>& path)  {
//	if (subroot == NULL) {
//		return NULL;
//	}
//	
//	if (subroot->left == NULL && subroot->right == NULL) {
//		return path;
//	} else {
//		path.push_back(subroot->elem);
//		addPath(subroot->left, path);
//		addPath(subroot->right,path);
//	}
//}
/**
 * Each node in a tree has a distance from the root node - the depth of that
 * node, or the number of edges along the path from that node to the root. This
 * function returns the sum of the distances of all nodes to the root node (the
 * sum of the depths of all the nodes). Your solution should take O(n) time,
 * where n is the number of nodes in the tree.
 * @return The sum of the distances of all nodes to the root
 */
template <typename T>
int BinaryTree<T>::sumDistances() const
{
    // your code here
    return 1;//sumDistances(root);
}

//template <typename T>
//int BinaryTree<T>::sumDistances(Node* subroot, int sum) const {
//	if (subroot == NULL) {
//		return 0;
//	}
//
//	if (subroot->left == NULL && subroot->right == NULL) {
//		sum 
//	}
//}

