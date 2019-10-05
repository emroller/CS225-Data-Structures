#include "abstractsyntaxtree.h"

/**
 * Calculates the value from an AST (Abstract Syntax Tree). To parse numbers from strings, please use std::stod
 * @return A double representing the calculated value from the expression transformed into an AST
 */
double AbstractSyntaxTree::eval() const {
    // @TODO Your code goes here...
    return eval(getRoot());
}

double AbstractSyntaxTree::eval(Node* subroot) const {
	if (subroot == NULL) {
		return -1;
	}
	if (subroot->elem == "+") {
		return eval(subroot->left) + eval(subroot->right);
	} else if (subroot->elem == "*") {
		return eval(subroot->left) * eval(subroot->right);
	} else if (subroot->elem == "-") {
		return eval(subroot->left) - eval(subroot->right);
	} else if (subroot->elem == "/") {
		return eval(subroot->left) / eval(subroot->right);
	} else {
		return std::stod(subroot->elem);
	}
}
