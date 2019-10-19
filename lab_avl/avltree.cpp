/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
	Node* r = t->right;
	t->right = r->left;
	r->left = t;
	t->height = 1 + std::max(heightOrNeg1(t->right), heightOrNeg1(t->left));
	t = r;
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
	Node* l = t->left;
	t->left = l->right;
	l->right = t;
	t->height = 1 + std::max(heightOrNeg1(t->right), heightOrNeg1(t->left));
	t = l;
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
	rotateRight(t->right);
	rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here
   	int balance = heightOrNeg1(subtree->right) - heightOrNeg1(subtree->left);

	if (balance == -2) {
		int l_balance = heightOrNeg1(subtree->left->right) - heightOrNeg1(subtree->left->left);
		if (l_balance == -1) {
			rotateRight(subtree);
		} else {
			rotateLeftRight(subtree);
		}
	} else if (balance == 2) {
		int r_balance = heightOrNeg1(subtree->right->right) - heightOrNeg1(subtree->right->left);
		if (r_balance == 1) {
			rotateLeft(subtree);
		} else {
			rotateRightLeft(subtree);
		}
	}
	subtree->height = 1 + std::max(heightOrNeg1(subtree->left), heightOrNeg1(subtree->right));
	
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& node, const K& key, const V& value) {
    // your code here
	 if (node == NULL) {
		node = new Node(key, value);
		return;
	}
	if (key < node->key) {
		insert(node->left, key, value);
	} else if (key > root->key) {
		insert(node->right, key, value);
	} else {
		node->value = value;
		return;
	}
	
	node->height = std::max(heightOrNeg1(node->left), heightOrNeg1(node->right));
}


template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
		remove(subtree->left, key);
        // your code here
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            delete subtree;
			subtree = NULL;
			return;
			/* no-child remove */
            // your code here
        } else if (subtree->left != NULL && subtree->right != NULL) {
			Node* toRemove = subtree->left;
			while (toRemove->right != NULL) {
				// IOP
				toRemove = toRemove->right;
			}
			subtree->key = toRemove->key;
			subtree->value = toRemove->value;
			remove(subtree->left, toRemove->key);
			rebalance(subtree);
            /* two-child remove */
            // your code here
        } else {
			Node* left = subtree->left;
			Node* right = subtree->right;
			delete subtree;
			if (left != NULL) {
				subtree = left;
			} else {
				subtree = right;
				rebalance(subtree);
			}
            /* one-child remove */
            // your code here
        }
        subtree->height = std::max(heightOrNeg1(subtree->left), heightOrNeg1(subtree->right));
		rebalance(subtree);
        // your code here
    }
}
