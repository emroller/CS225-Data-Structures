/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
	if (first[curDim] == second[curDim])
		return first < second;
	return first[curDim] < second[curDim]; 
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
 
	// don't need to invoke sqrt; just compare squared distances
	int potDist = 0;
	int bestDist = 0;
	for (int i = 0; i < Dim; i++) {
		potDist += (target[i] - potential[i]) * (target[i] - potential[i]);
		bestDist += (target[i] - currentBest[i]) * (target[i] - currentBest[i]);
	}
	if (potDist == bestDist)
		return potential < currentBest;

     return potDist < bestDist;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
	if (newPoints.empty())
		return;

	// copy newPoints into a vector we can modify
	vector<Point<Dim>> points = newPoints;

	// finds the median node and sets it as the root node
	
	// then recursively makes the rest of the tree
	root = makeNodes(root, points, 0, 0, points.size()-1);
}

/** helper function for recursively constructing tree */
template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::makeNodes(KDTreeNode *& subroot, vector<Point<Dim>>& points, int dimension, int left, int right) {
	if (points.empty() || right < left)
		return NULL;

	// if points.size = 6; median should be the third smalles
	// if points.size = 5, median should be the second smallest
	int median_pt = (left + right) / 2;

	//find the median point
	Point<Dim> median = findMedian(points, left, right, median_pt, dimension);
	//use it to make the subroot node
	subroot = new KDTreeNode(median);

	//increment the dimension, or wrap back around
	int newDim = (dimension + 1) % Dim;
	//make the subroot's children nodes
	makeNodes(subroot->left, points, newDim, left, median_pt-1);
	makeNodes(subroot->right, points, newDim, median_pt+1, right);

	return subroot;

}

/*
 * sorts the points vector so that everything with a smaller value than the last element at the given dimension is to its left; everything else is to its right
 */
template <int Dim>
int KDTree<Dim>::partition(vector<Point<Dim>>& points, int L, int R, int dim) {
	Point<Dim> x = points[R];
	int i = L;
  	for(int j = L; j < R; j++){
    	if(smallerDimVal(points[j], x, dim)){
      		std::swap(points[i], points[j]);
      		i++;
    	}
  	}
  std::swap(points[R], points[i]);
  return i;

}

template <int Dim>
Point<Dim> KDTree<Dim>::findMedian(vector<Point<Dim>>& points, int L, int R, int med_pt, int dim) {
	// base cases
	if (points.size() == 0) return NULL;
	if (points.size() == 1) return points[L];
	
	// find the current index of where the last element was moved to
	int index = partition(points, L, R, dim);

	// if we're at the median index, return that point
	if (index == med_pt)
		return points[med_pt];

	if (index > med_pt)
		//recurse for left subarray
		return findMedian(points, L, index - 1, med_pt, dim);

	// or recurse for right subarray
	return findMedian(points, index + 1, R, med_pt, dim);
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {

//	deleteTree(root);
}

template <int Dim>
void KDTree<Dim>::deleteTree(KDTreeNode* node) {
/*
	if (node == NULL) return;

	if (node->left != NULL)
		deleteTree(node->left);

	if (node->right != NULL)
		deleteTree(node->right);
	delete node;
*/
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
	/*
     * 1) starting at root, determine euclidean distance between left and right, based on 1st dimension (x)
     * 2) go to the child with the smaller distance
     * 3) use that node as the root and increment dimension (mod if necessary)
    */
 
	Point<Dim> best = root->point;
	double distBest = euclidDist(query, best);
    return findNearestNeighbor(root, query, best, distBest);

}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(KDTreeNode* subroot, const Point<Dim>& query, Point<Dim>& best, int bestDist)  const {

	// if the query point is in the tree, and that's where we are, return it
	if (subroot->point == query)
		return subroot->point;

	if (subroot->left == NULL && subroot->right == NULL)
		return best;

	// if the left child is null, we want to recurse down the right child only
	if (subroot->left == NULL)
		best = findNearestNeighbor(subroot->right, query, best, bestDist);
	// if the right child is null, we want to recurse down the left child only
	else if (subroot->right == NULL)
		best = findNearestNeighbor(subroot->left, query, best, bestDist);
	else {
		// find the distances from query for the left and right children
		double distL = euclidDist(query, subroot->left->point);
		double distR = euclidDist(query, subroot->right->point);

	// if either of those are closer than the current best distances, update the best point and distance
		if (distL < bestDist) {
			best = subroot->left->point;
			bestDist = distL;
		} else if (distR < bestDist) {
			best = subroot->right->point;
			bestDist = distR;
		}

	// now we have to continue traversing down the tree
	// if the distances are equal, traverse based on the < point operator
		if (distL == distR) {
			best = subroot->left->point < subroot->right->point ? findNearestNeighbor(subroot->left, query, best, bestDist): findNearestNeighbor(subroot->right, query, best, bestDist); 
	// otherwise, traverse to the child that has the smaller distance
		} else if (distL < distR) {
			best = findNearestNeighbor(subroot->left, query, best, bestDist);
		} else { // distR < distL
			best = findNearestNeighbor(subroot->right, query, best, bestDist);
		}
	}

	//first check if the distance to the parent node is less than the current radius
	if (shouldReplace(query, best, subroot->point))
		bestDist = euclidDist(query, subroot->point);
		best = subroot->point;

	// check to see if the current splitting plane's distance from search node is within the current radius 
	return best;

}

template <int Dim>
int KDTree<Dim>::euclidDist(const Point<Dim>& first, const Point<Dim>& second) const {
	if (first == second) return 0;

	int dist = 0;
	for (int i = 1; i <= Dim; i++) {
		dist += (first[i-1] - second[i-1]) * (first[i-1] - second[i-1]);
	}
	return sqrt(dist);
}

/*
	if (subroot == NULL)
		return query;	//why? i dunno but it passes tests
	if (subroot->point == query)
		return subroot->point;

	int newDim = 1;
	if (Dim != 1)
		newDim = (dimension + 1) % (Dim) + 1;

	if (subroot->left == NULL)
		return findNearestNeighbor(subroot->right, query, newDim);
	else if (subroot->right == NULL)
		return findNearestNeighbor(subroot->left, query, newDim);
	else {
		int leftDist = abs(subroot->left->point[dimension-1] - query[dimension-1]);
		int rightDist = abs(subroot->right->point[dimension-1] - query[dimension-1]);
		if (leftDist == rightDist) {
			if (subroot->left->point < subroot->right->point)
				return findNearestNeighbor(subroot->left, query, newDim);
			else
				return findNearestNeighbor(subroot->right, query, newDim);
			//return subroot->left->point < query ? findNearestNeighbor(subroot->left, query, newDim) : findNearestNeighbor(subroot->right, query, newDim);	
		} else if (leftDist < rightDist)
			return findNearestNeighbor(subroot->left, query, newDim);
		else
			return findNearestNeighbor(subroot->right, query, newDim);
	}

}
*/
