#include <queue>
#include <algorithm>
#include <string>
#include <list>
#include <map>
using std::string;
using std::vector;
using std::list;
using std::pair;
using std::map;

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
    std::list<std::string> path;
    std::queue<string> bfs;
	map<string, string> predecessor;
	map<string, int> distance;

	for (auto it = edgeList.begin(); it != edgeList.end(); it++) {
		if ((it->get().source().key() == start && it->get().dest().key() == end) || 
			(it->get().source().key() == end && it->get().dest().key() == start)) {
			path.push_back(start);
			path.push_back(end);
			return path;
		}	

	}

	for (auto it = vertexMap.begin(); it != vertexMap.end(); it++) {
		predecessor.insert(pair<string, string> (it->first, "N"));
		distance.insert(pair<string, int> (it->first, -1));
	}



	distance[start] = 0;

	predecessor[start] = "S";

	bfs.push(start);

	while (!bfs.empty()) {
		Vertex v = bfs.front();
		bfs.pop();

		list<string> neighbors;

		list<edgeListIter> n = adjList[v.key()];
		for (edgeListIter edge : n) {
			if (edge->get().source().key() == v.key()) neighbors.push_back(edge->get().dest().key());
			else neighbors.push_back(edge->get().source().key());
		}


		for (string neighbor : neighbors) {
			
			if (distance[neighbor]== -1) {
				distance[neighbor] = distance[v.key()] + 1;
				predecessor[neighbor] = v.key();
				bfs.push(neighbor);

			}
			
		}

	}

	string current = end;
	path.push_back(current);

	while (current != start) {
		current = predecessor[current];
		path.push_back(current);

	}
	
    return path;
}


