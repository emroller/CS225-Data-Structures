#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <cstdlib>
#include <string>

using namespace cs225;

void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  // we need one PNG to read pixel values from (without modifying)...
  PNG input_image;
  input_image.readFromFile(inputFile);
  
  // ...and one PNG to write the new values to
  PNG output_image;
  output_image.readFromFile(inputFile);

  unsigned int width = input_image.width();
  unsigned int height = input_image.height();
  for (unsigned int x = 0; x < width; x++) {
    for (unsigned int y = 0; y < height; y++) {
	HSLAPixel& pixel = output_image.getPixel(x,y);
	HSLAPixel new_pixel = input_image.getPixel(width-x-1, height-y-1);
	
	// directly accessing pixel
	// change each value of the current pixel to the rotated value
	pixel.s = new_pixel.s;
	pixel.h = new_pixel.h;
	pixel.a = new_pixel.a;
	pixel.l = new_pixel.l;
    }  
}
  output_image.writeToFile(outputFile); 
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3
  for (unsigned int x = 0; x < width; x++) {
    for (unsigned int y = 0; y < height; y++) {
	HSLAPixel& pixel = png.getPixel(x,y);
	if (x == 1) {
	  pixel.h = 30;
	  pixel.s = .5;
	  pixel.l = .5;
	  pixel.a = 1;
	} else if (x==2) {
	  pixel.h = 170;
          pixel.s = .9;
          pixel.l = .9;
          pixel.a = 1;
	} else {
	  pixel.h = 300;
          pixel.s = .2;
          pixel.l = .2;
          pixel.a = 1;
	}
    }
  }  

return png;
}

