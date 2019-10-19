#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "BFS.h"

using namespace cs225;
using std::vector;
/**
 * Initializes a breadth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * @param png The image this BFS is going to traverse
 * @param start The start point of this BFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this BFS
 */
BFS::~BFS() {}
BFS::BFS(const PNG & png, const Point & start, double tolerance) {  
  /** @todo [Part 1] */
	png_ = png;
	start_ = start;
	tolerance_ = tolerance;	
	traversal_points_.push(start);
}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator BFS::begin() {
  /** @todo [Part 1] */
	BFS* b1 = new BFS(png_, start_, tolerance_);
  return ImageTraversal::Iterator(b1, start_, png_, tolerance_);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator BFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void BFS::add(const Point & point) {
  /** @todo [Part 1] */
	traversal_points_.push(point);
//	std::cout<<"front element: "<<traversal_points_.front()<<std::endl;
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point BFS::pop() {
  /** @todo [Part 1] */
	Point first = traversal_points_.front();
	traversal_points_.pop();
	return first;
}

/**
 * Returns the current Point in the traversal.
 */
Point BFS::peek() const {
  /** @todo [Part 1] */
  return traversal_points_.front();
}

/**
 * Returns true if the traversal is empty.
 */
bool BFS::empty() const {
  /** @todo [Part 1] */
  return traversal_points_.size() == 0;
}
