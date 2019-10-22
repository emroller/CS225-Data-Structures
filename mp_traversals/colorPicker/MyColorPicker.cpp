#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */
MyColorPicker::MyColorPicker( HSLAPixel color1_, HSLAPixel color2_, HSLAPixel color3_) {
//	png = png_;
	color1 = color1_;
	color2 = color2_;
	color3 = color3_;
	hue = 0;
}

//MyColorPicker::MyColorPicker(double increment)
  //: hue(0), increment(increment) { }

HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
	HSLAPixel pixel;
	if (x % 1 == 0) {
   		pixel.h = hue;
		pixel.s = 1;
		pixel.l = 0.5;
	} else if ( x % 2 == 0) {
		pixel.h = hue;
		pixel.s = 0.7;
		pixel.l = 0.8;
	} else {
		pixel.h = hue;
		pixel.s = 0.2;
		pixel.l = 1;
	}
  hue += 20;
  if (hue >= 360) { hue -= 360; }
  return pixel;
} /* @todo [Part 3] */
