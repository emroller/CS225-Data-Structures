#include "dsets.h"

#include <iostream>
using std::vector;

void DisjointSets::addelements(int num) {
	// add in num unconnected notes (-1)
	for (int i = 0; i < num; i++) {
		set.push_back(-1);
	}
}
	
int DisjointSets::find(int elem) {
	// base case - find the root
	if (set[elem] == -1) return elem;

	int root = find(set[elem]);
	set[elem] = root;
	return root;	
}


void DisjointSets::setunion(int a, int b) {

}


int DisjointSets::size(int elem) {
	return -1;
}

