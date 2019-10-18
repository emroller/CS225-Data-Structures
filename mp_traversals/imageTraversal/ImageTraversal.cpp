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
	for (int x = 0; x < (int)png_.width(); x++) {
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

	current_ = traversal_->pop();
		std::cout<<"current: "<<current_<<std::endl;
		int x = current_.x;
		int y = current_.y;
		int height = png_.height();
		int width = png_.width();


	HSLAPixel startPix = png_.getPixel(start_.x, start_.y);
	
	// print the png's visited values TODO: delete this
	//std::cout<<"Printing visited values: "<<std::endl;
	//for (unsigned int i = 0 ; i <  visited_points_.size(); i++) {
	//	for (unsigned int j = 0; j < visited_points_[i].size(); j++) {
	//		std::cout<<visited_points_[i][j];
	//	}
	//	std::cout<<""<<std::endl;
	//}		
	// for each neightbor, make sure it's in bounds and hasn't already been visited
	
	// RIGHT
	if (x + 1 < width && !visited_points_[x + 1][y]) {
		double delta = calculateDelta(png_.getPixel(x + 1, y), startPix);
		if (delta <=  tolerance_) {
			Point right = Point(x + 1, y);
			traversal_->add(right);
		}	
	}

	// BELOW
	if (y + 1 < height && !visited_points_[x][y + 1]) {
		double delta = calculateDelta(png_.getPixel(x, y + 1), startPix);
		if (delta <= tolerance_) {
			Point below = Point(x, y + 1);
			traversal_->add(below);
		}	
	}

	// LEFT
	if ( x > 0 && !visited_points_[x - 1][y]) {		//used to be [curr.x-1]
		double delta = calculateDelta(png_.getPixel(x - 1, y), startPix);
		if (delta <= tolerance_) {
			Point left = Point(x - 1, y);
			traversal_->add(left);	
		}	

	}
	// ABOVE
	if ( y > 0 && !visited_points_[x][y - 1]) {		//used to be [curr.y - 1]
		double delta = calculateDelta(png_.getPixel(x, y - 1), startPix);
		if (delta <= tolerance_) {
			Point above = Point(x, y - 1);
			traversal_->add(above);	
		}	

	}

	int size = visited_points_.size();
	if (!traversal_->empty()) {
	 	current_ = traversal_->peek();
	}
	visited_points_[x][ y] = true;
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

