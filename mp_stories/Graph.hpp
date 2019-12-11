#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <string>
#include <iostream>

using std::cout;
using std::endl;

/**
* @return The number of vertices in the Graph
*/
template <class V, class E>
unsigned int Graph<V,E>::numVertices() const {
	return adjList.size();
}


/**
* The degree of the vertex. For directed: Sum of in-degree and out-degree
* @return Returns the degree of a given vertex.
* @param v Given vertex to return degree.
*/
template <class V, class E>
unsigned int Graph<V,E>::degree(const V & v) const {
	unsigned int degree = 0;
	for (auto it = edgeList.begin(); it != edgeList.end(); ++it) {
		E& e = (*it).get();
		string check = e.source().key();
		string destination = e.dest().key();
		if (check == v.key() || destination == v.key()) degree++;
	}
	return degree;
}


/**
* Inserts a Vertex into the Graph.
* @param key The key of the Vertex to insert
* @return The inserted Vertex
*/
template <class V, class E>
V & Graph<V,E>::insertVertex(std::string key) {
    V & v = *(new V(key));
	vertexMap.insert({key, v});
	adjList.insert({key,std::list<edgeListIter>()});
	
  return v;
}


/**
* Removes a given Vertex
* @param v The Vertex to remove
*/
template <class V, class E>
void Graph<V,E>::removeVertex(const std::string & key) {
	vertexMap.erase(vertexMap.find(key));	

	// remove ingoing and outgoing edges
	for (auto it = edgeList.begin(); it != edgeList.end(); ++it) {
		if (it->get().dest().key() == key || it->get().source().key() == key) {
			edgeList.erase(it);
		}	
	}	

	// remove the node and its list of adjacencies from the adjList
	for (auto it = adjList.begin(); it != adjList.end(); ++it) {
		if (it->first == key) {
			adjList.erase(it);
		} else {
			for (edgeListIter edge : it->second) {
				if (edge->get().dest().key() == key || edge->get().source().key() == key) {
					adjList.erase(it);
				}
			}
		}
	}
}


/**
* Inserts an Edge into the Graph.
* @param v1 The source Vertex
* @param v2 The destination Vertex
* @return The inserted Edge
*/
template <class V, class E>
E & Graph<V,E>::insertEdge(const V & v1, const V & v2) {
    E & e = *(new E(v1, v2));
	edgeListIter it = edgeList.insert(edgeList.end(), e);

	std::list<edgeListIter> & l = adjList.at(v1.key());
	l.insert(l.begin(), it);
	
	if (!e.directed())	{
	std::list<edgeListIter> & l2 = adjList.at(v2.key());
	l2.insert(l2.begin(), it);
	}
  	return e;
}


/**
* Removes an Edge from the Graph. Consider both the undirected and directed cases.
* min(degree(key1), degree(key2))
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const std::string key1, const std::string key2) {  
	//cout<<"removing edge from "<<key1 << " " << key2<<endl;

	Edge e(key1, key2);

	std::list<edgeListIter>& l = adjList.at(key1);
	for (auto it = l.begin(); it != l.end(); it++) {
		if ((*it)->get() == e) {
			l.erase(it);
			break;
		}	
	}

	std::list<edgeListIter>& l2 = adjList.at(key2);
	if (!e.directed()) {
		for (auto it = l2.begin(); it != l2.end(); it++) {
		if ((*it)->get() == e) {
			l2.erase(it);
			break;
		}	
	}

	}
	for (auto it = edgeList.begin(); it != edgeList.end(); ++it) {
		if (it->get() == e) {
			edgeList.erase(it);
			break;
		}	
	}
	
}


/**
* Removes an Edge from the Graph given by the location of the given iterator into the edge list.
* @param it An iterator at the location of the Edge that
* you would like to remove
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const edgeListIter & it) {
	for (auto itr = adjList.begin(); itr != adjList.end(); ++itr) {
		if (itr->second == it) adjList.erase(it);
	}
}


/**
* Return the list of incident edges from a given vertex.
* For the directed case, consider all edges that has the vertex as either a source or destination.
* @param key The key of the given vertex
* @return The list edges (by reference) that are adjacent to the given vertex
*/
template <class V, class E>  
const std::list<std::reference_wrapper<E>> Graph<V,E>::incidentEdges(const std::string key) const {
  std::list<std::reference_wrapper<E>> edges;
	for (auto it = edgeList.begin(); it != edgeList.end(); ++it) {
		E& e = (*it).get();
		string check = e.source().key();
		string destination = e.dest().key();
		if (key == check || key == destination) edges.push_back(e);

	}
  return edges;
}


/**
* Return whether the two vertices are adjacent to one another. Consider both the undirected and directed cases.
* When the graph is directed, v1 and v2 are only adjacent if there is an edge from v1 to v2.
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
* @return True if v1 is adjacent to v2, False otherwise
*/
template <class V, class E>
bool Graph<V,E>::isAdjacent(const std::string key1, const std::string key2) const {
/*
	for (auto it = adjList.begin(); it != adjList.end(); it++) {
		cout<<it->first<< " [ ";
		for (auto i = it->second.begin(); i != it->second.end(); i++) {
			cout<<(*i)->get()<<" ";
		}
		cout<<"]"<<endl;
	}
	
*/	
	std::list<edgeListIter> l = adjList.at(key1);

	if (l.empty() && adjList.at(key2).empty()) { cout<<"a;lskdf"<<endl; return false;}

	for (auto it = l.begin(); it != l.end(); ++it) {
		E& e = (*it)->get();
		if (e.directed()) {
			if (e.source().key() == key1 && e.dest().key() == key2) return true;
		} else {
			if ((e.source().key() == key1 && e.dest().key() == key2) || (e.dest().key() == key1 && e.source().key() == key2)) return true;
		}
		
	}

	return false;	

}
