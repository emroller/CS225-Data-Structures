#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */
MyColorPicker::MyColorPicker(HSLAPixel color1_, HSLAPixel color2_, HSLAPixel color3_) {
	color1 = color1_;
	color2 = color2_;
	color3 = color3_;
}

HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */
    if (x % 2 == 0) {
		return color1;
	} else {
		if (y % 2 == 0) {
			return color2;
		} else {
			return color3;
		}
	}
}
