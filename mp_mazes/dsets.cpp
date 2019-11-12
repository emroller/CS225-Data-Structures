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
	if (set[elem] < 0) return elem;

	return find(set[elem]);
}


void DisjointSets::setunion(int a, int b) {

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


int DisjointSets::size(int elem) {
	while (set[elem] >= 0) {
		elem = set[elem];
	}
	return set[elem] * -1;
}

