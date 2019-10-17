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
	traversal_ = NULL;
	current_ = Point(-1000000, -1000000);	
	tolerance_ = -10000000;		// shouldn't ever have this value?
}


ImageTraversal::Iterator::Iterator(ImageTraversal* traversal, Point point, PNG png, double tolerance) {
	traversal_ = traversal;
	current_ = point;
	start_ = point;
	png_ = png;
	tolerance_ = tolerance;
	for (unsigned int x = 0; x < png_.width(); x++) {
		visited_points_.push_back(vector<bool> (png_.height(), false));		// vec<bool> of size height, all false	
	}
	visited_points_[current_.x][current_.y] = true;
}
/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
	// get the first point in the traversal
	if (!traversal_->empty()) {
	 	current_ = traversal_->pop();
	}

	HSLAPixel startPix = png_.getPixel(start_.x, start_.y);
	// print the png's visited values TODO: delete this
	std::cout<<"Printing visited values: "<<std::endl;
	for (unsigned int i = 0 ; i <  visited_points_.size(); i++) {
		for (unsigned int j = 0; j < visited_points_[i].size(); j++) {
			std::cout<<visited_points_[i][j];
		}
		std::cout<<""<<std::endl;
	}		
	// for each neightbor, make sure it's in bounds and hasn't already been visited
	
	std::cout<<traversal_<<std::endl;
	// RIGHT
	if (current_.x + 1 < png_.width() && !visited_points_[current_.x + 1][current_.y]) {
		double delta = calculateDelta(png_.getPixel(current_.x + 1, current_.y), startPix);
		if (delta <  tolerance_) {
			Point right = Point(current_.x + 1, current_.y);
			traversal_->add(right);
		}	
	}

	// BELOW
	if (current_.y + 1 < png_.height() && !visited_points_[current_.x][current_.y + 1]) {
		double delta = calculateDelta(png_.getPixel(current_.x, current_.y + 1), startPix);
		if (delta < tolerance_) {
			Point below = Point(current_.x, current_.y + 1);
			traversal_->add(below);
		}	
	}

	// LEFT
	if (current_.x > 0 && !visited_points_[current_.x - 1][current_.y]) {		//used to be [curr.x-1]
		double delta = calculateDelta(png_.getPixel(current_.x - 1, current_.y), startPix);
		if (delta < tolerance_) {
			Point left = Point(current_.x - 1, current_.y);
			traversal_->add(left);	
		}	

	}
	// ABOVE
	if (current_.y > 0 && !visited_points_[current_.x][current_.y - 1]) {		//used to be [curr.y - 1]
		double delta = calculateDelta(png_.getPixel(current_.x, current_.y - 1), startPix);
		if (delta < tolerance_) {
			Point above = Point(current_.x, current_.y - 1);
			traversal_->add(above);	
		}	

	}
	// TODO: what comes after adding the point's neighbors to the traversal?	
//see if empty, if so then were done
//if not empty then
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
	return !(current_ == other.current_ || tolerance_ != other.tolerance_);
}

