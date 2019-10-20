#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */
//MyColorPicker::MyColorPicker(PNG png_, HSLAPixel color1_, HSLAPixel color2_, HSLAPixel color3_) {
//	png = png_;
//	color1 = color1_;
//	color2 = color2_;
//	color3 = color3_;
//}

MyColorPicker::MyColorPicker (double increment) : hue(0), increment(increment) { }

HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */
//	HSLAPixel cur_pix = png.getPixel(x % png.width(), y % png.width());
    //if (x % 2 == 0) {
	//	cur_pix = color1;
	//} else {
	//	if (y % 2 == 0) {
	//		cur_pix = color2;
	//	} else {
	//		cur_pix = color3;
	//	}
	//}
	//return cur_pix;

// same as RainbowColorPicker for now
	HSLAPixel pixel(hue, 1, 0.5);
    hue += increment;
  		if (hue >= 360) { hue -= 360; }
  	return pixel;
}
