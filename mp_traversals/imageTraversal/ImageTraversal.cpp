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
	for (unsigned int x = 0; x < png.width(); x++) {
		vector<bool> vect(png.height(), false);		// vec<bool> of size height, all false	
		visited_points_.push_back(vect);
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
	Point curr = traversal_->pop();
	

	std::cout<<"start: " <<current_.x<<" "<<current_.y<<std::endl;
	for (unsigned int i = 0 ; i <  visited_points_.size(); i++) {
		for (unsigned int j = 0; j < visited_points_[i].size(); j++) {
			std::cout<<visited_points_[i][j];
		}
		std::cout<<""<<std::endl;
	}		
	// for each neightbor, make sure it's in bounds and hasn't already been visited
	if (curr.x + 1 < png_.width() && !visited_points_[curr.x + 1][curr.y]) {
		double delta = calculateDelta(png_.getPixel(curr.x + 1, curr.y), png_.getPixel(curr.x, curr.y));
		if (delta < tolerance_) {
			Point right(curr.x + 1, curr.y);
			traversal_->add(right);	
		}	
	}

	if (curr.y + 1 < png_.height() && !visited_points_[curr.x][curr.y + 1]) {
		double delta = calculateDelta(png_.getPixel(curr.x, curr.y + 1), png_.getPixel(curr.x, curr.y));
		if (delta < tolerance_) {
			Point below(curr.x, curr.y + 1);
			traversal_->add(below);	
		}	
	// left
	}
	std::cout<<curr.x <<" "<<curr.y<<std::endl;
	if (curr.x >= 0 && !visited_points_[curr.x][curr.y]) {		//used to be [curr.x-1]
		double delta = calculateDelta(png_.getPixel(curr.x - 1, curr.y), png_.getPixel(curr.x, curr.y));
		if (delta < tolerance_) {
			Point left(curr.x - 1, curr.y);
			traversal_->add(left);	
		}	

	}
	// above
	if (curr.y >= 0 && !visited_points_[curr.x][curr.y]) {		//used to be [curr.y - 1]
		double delta = calculateDelta(png_.getPixel(curr.x, curr.y - 1), png_.getPixel(curr.x, curr.y));
		if (delta < tolerance_) {
			Point above(curr.x, curr.y - 1);
			traversal_->add(above);	
		}	

	}

	visited_points_[curr.x][curr.y] = true;
	
	curr = traversal_->peek();

	while (!traversal_->empty()) {
		if (visited_points_[curr.x][curr.y]) {
			curr = traversal_->pop();
			curr = traversal_->peek();
		} else {break;}
	}
	
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
	return false;
	//return !(tolerance_ == other.tolerance_ && current_.x == other.current_.x && current_.y == other.current_.y);
}

