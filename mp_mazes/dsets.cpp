#include "dsets.h"

#include <iostream>
using std::vector;

void DisjointSets::addelements(int num) {
	// add in num unconnected notes (-1)
	for (int i = 0; i < num; i++) {
		// root nodes have negative elements - the negative of their size
		set.push_back(-1);
	}
}
	
/*
 * You could have just two lines- base case and recursive return
 * but this doesn't use path compression i.e. doesn't compress the height of the trees
 */
int DisjointSets::find(int elem) {
	// base case - find the root
	if (set[elem] < 0) return elem;

	int result = find(set[elem]);
	set[elem] = result;
	

	return result;
}


void DisjointSets::setunion(int a, int b) {

	// union if they aren't in the same set already
	if (find(a) != find(b)) {
		while (set[a] >= 0) {
			a = set[a];
		}
		while (set[b] >= 0) {
			b = set[b];
		}
		int newSize = set[a] + set[b];

		if (set[a] < set[b]) {
			set[b] = a;
			set[a] = newSize;
		} else {
			set[a] = b;
			set[b] = newSize;
		}
	}
}


int DisjointSets::size(int elem) {
	while (set[elem] >= 0) {
		elem = set[elem];
	}
	return set[elem] * -1;
}

