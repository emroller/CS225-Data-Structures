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

	vector<Point<Dim>> points = newPoints;
	int median_pt = std::floor((points.size() - 1) / 2);
	KDTreeNode median = findMedian(points, 0, points.size() - 1, median_pt, 0);

// ------------------------------- old code ------------------------------------ //
	// if newPoints has an even number of nodes, median is one before the middle
	// if newPoints has an odd number of nodes, division by 2 will round down
	//Point<Dim> median_pt; 

	//if (points[points.size()/2 -1][0] == points[points.size()] {
	//	median_pt = points[points.size()/2 - 1] < points[points.size()/2] ? points[points.size()/2 -1] : points[points.size()/2];
	//} else {
	//	median_pt =  points.size() % 2 == 0 ? points[points.size() / 2 - 1] : points[points.size() / 2]; 
	//root = new KDTreeNode(median_pt);	
}

template <int Dim>
int KDTree<Dim>::partition(vector<Point<Dim>> points, int L, int R, int dim) {
	int x = points.at(R)[dim];
	int i = L;
	for (int j = L; j < R; j++) {
		if (points.at(j)[dim] <= x)
			std::swap(points.at(i), points.at(j));
			i++;
	}
	std::swap(points.at(i), points.at(R));
	return i;

}

template <int Dim>
Point<Dim> KDTree<Dim>::findMedian(vector<Point<Dim>> points, int L, int R, int med_pt, int dim) {
	int index = partition(points, L, R, dim);
	
	if (index - 1 == med_pt - 1)
		return points.at(index);

	if (index - 1 > med_pt - 1)
		//recurse for left subarray
		return findMedian(points, L, index - 1, med_pt, dim);

	return findMedian(points, index + 1, R, med_pt - index + L - 1, dim);
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
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */

    return Point<Dim>();
}

