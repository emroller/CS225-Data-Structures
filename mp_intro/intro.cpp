#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>

using namespace cs225;

void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
std::cout << "here!" << std::endl; 
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
	HSLAPixel new_pixel = input_image.getPixel(width-x, height-y);
	
	// directly accessing pixel
	// change each value of the current pixel to the rotated value
	pixel.s = new_pixel.s;
	pixel.h = new_pixel.h;
	pixel.a = new_pixel.a;
	pixel.l = new_pixel.l;

    }
  
}
  std::cout << "file length " << outputFile.size() << std::endl;
  std::cout << "width: " << output_image.width() << std::endl;
  std::cout << "height: " << output_image.height() << std::endl;
  output_image.writeToFile(outputFile); 
}


cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  return png;
}
