#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "DFS.h"
using std::vector;

/**
 * Initializes a depth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * 
 * @param png The image this DFS is going to traverse
 * @param start The start point of this DFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this DFS
 */
DFS::~DFS() {}

DFS::DFS(const PNG & png, const Point & start, double tolerance) {  
  /** @todo [Part 1] */
	png_ = png;
	start_ = start;
	tolerance_ = tolerance;
	traversal_points_.push(start);
}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator DFS::begin() {
  /** @todo [Part 1] */
	DFS* d = new DFS(png_, start_, tolerance_);
  return ImageTraversal::Iterator(d, start_, png_, tolerance_);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator DFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void DFS::add(const Point & point) {
  /** @todo [Part 1] */
	//if (calculateDelta(png.getPixel(point.x, point.y), png.getPixel(start_.x, start_.y) < tolerance_) {
		traversal_points_.push(point);	// don't think this is right
//		std::cout<<"top element: "<<traversal_points_.top()<<std::endl;
	//}
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point DFS::pop() {
  /** @todo [Part 1] */
    Point last = traversal_points_.top();
	traversal_points_.pop();
	return last;
}

/**
 * Returns the current Point in the traversal.
 */
Point DFS::peek() const {
  /** @todo [Part 1] */
  return traversal_points_.top();
}

/**
 * Returns true if the traversal is empty.
 */
bool DFS::empty() const {
  /** @todo [Part 1] */
  return traversal_points_.size() == 0;
}
