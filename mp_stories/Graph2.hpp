#include <queue>
#include <algorithm>
#include <string>
#include <list>
using std::string;
using std::vector;
using std::list;

/**
 * Returns an std::list of vertex keys that creates any shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 * 
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 * 
 * You should use undirected edges. Hint: There are no edge weights in the Graph.
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end) {
  // TODO: Part 3
  std::list<std::string> path;
	
	for (auto it = edgeList.begin(); it != edgeList.end(); it++) {
		/**
 		 *  if there is an edge between the two vertices, that's the shortest path
 		 *  do nothing else
 		 */ 
		if ((it->get().source().key() == start && it->get().dest().key() == end) || 
			(it->get().source().key() == end && it->get().dest().key() == start)) {
			path.push_back(start);
			path.push_back(end);
		}
	}

	vector<list<string>> allPaths = findPaths(start, end);

	// if there is no path :(
	if (allPaths.empty()) return path;

	unsigned int shortest = allPaths[0].size();

	for (list<string> p : allPaths) {
		if (p.size() < shortest) path = p;
	}

    return path;
}

/** 
 * Finds all paths between a start and end vertex
 *
 * If there are no paths, return an empty vector
 */
template <class V, class E>
vector<list<string>> Graph<V, E>::findPaths(const string start, const string end) {
	// keep track of whether each vertex has been visited or not
/*
	std::unordered_map<string, bool> visited;
	for (auto it = vertexMap.begin(); it != vertexMap.end(); it++) {
		visited.insert({it->first, false});
	}
	visited.at(start) = true;
*/

	vector<list<string>> paths;	

    std::list<E_byRef> edges = edgeList;
	for (E_byRef e : edgeList) {
    	E & ed = *(new E(e.get().dest(), e.get().source()));
		edges.push_back(ed);
	}

	std::list<E_byRef> outbound;

	for (E_byRef e : edges) {
		if (e.get().source().key() == start) {
			outbound.push_back(e);
		}
	}
	
	return paths;
}




