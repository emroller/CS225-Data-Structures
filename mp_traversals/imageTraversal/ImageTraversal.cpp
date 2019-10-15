#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using std::vector;
/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
}

ImageTraversal::Iterator::Iterator(ImageTraversal* traversal, Point point, PNG png, double tolerance) {
	traversal_ = traversal;
	current_ = point;
	png_ = png;
	tolerance_ = tolerance;
	
}
/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
	Point curr = traversal_->pop();
	
	Point right(curr.x + 1, curr.y);
	Point below(curr.x, curr.y + 1);
	Point left(curr.x - 1, curr.y);
	Point above(curr.x, curr.y - 1);

	// for each neightbor, make sure it's in bounds and hasn't already been visited
	if (right.x < png_.width() && !traversal_->visited_points_.at(right.x).at(right.y)) {
		double delta = calculateDelta(png_.getPixel(right.x, right.y), png_.getPixel(curr.x, curr.y));
		if (delta < tolerance_) {
			traversal_->add(right);	
		}	
	}

	if (below.y < png_.height() && !traversal_->visited_points_.at(below.x).at(below.y)) {
		double delta = calculateDelta(png_.getPixel(below.x, below.y), png_.getPixel(curr.x, curr.y));
		if (delta < tolerance_) {
			traversal_->add(below);	
		}	

	}

	if (left.x > 0 && !traversal_->visited_points_.at(left.x).at(left.y)) {
		double delta = calculateDelta(png_.getPixel(left.x, left.y), png_.getPixel(curr.x, curr.y));
		if (delta < tolerance_) {
			traversal_->add(left);	
		}	

	}

	if (above.y > 0 && !traversal_->visited_points_.at(above.x).at(above.y)) {
		double delta = calculateDelta(png_.getPixel(above.x, above.y), png_.getPixel(curr.x, curr.y));
		if (delta < tolerance_) {
			traversal_->add(above);	
		}	

	}

//	visited_points_.at(curr.x).at(curr.y) = true;
	
//	curr = traversal_->peek();

	//while (!traversal_->empty()) {
	//	if (visited_points_.at(curr.x).at(curr.y)) {
	//		curr = traversal_->pop();
	//		curr = traversal_->peek();
	//	} else {break;}
	//}
	//
	return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return current_;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
	return !(tolerance_ == other.tolerance_ && current_.x == other.current_.x && current_.y == other.current_.y);
}

