 #include <iostream>
using std::cerr;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <cassert>
#include <algorithm>
#include <functional>

#include "Image.h"  

   void Image::darken() {
     
     for (unsigned x = 0; x < this->width(); x++) {
       for (unsigned y = 0; y < this->height(); y++) {
	 cs225:: HSLAPixel & pixel = this->getPixel(x,y);
	 if (pixel.l < 0.1) {
	   pixel.l = 0;
	 } else {
	   pixel.l -= 0.1;
	 }
       }
     }
   }

   void Image::darken(double amount) {

     for (unsigned x = 0; x < this->width(); x++) {
       for (unsigned y = 0; y < this->height(); y++) {
	 cs225:: HSLAPixel & pixel = this->getPixel(x,y);
         if (pixel.l - amount < 0) {
           pixel.l = 0;
         } else {
           pixel.l -= amount;
         }
       }
     }
   }

   void Image::desaturate() {

     for (unsigned x = 0; x < this->width(); x++) {
       for (unsigned y = 0; y < this->height(); y++) {
	 cs225:: HSLAPixel & pixel = this->getPixel(x,y);
         if (pixel.s < 0.1) {
           pixel.s = 0;
         } else {
           pixel.s -= 0.1;
         }
       }
     }
   }

   void Image::desaturate(double amount) {

     for (unsigned x = 0; x < this->width(); x++) {
       for (unsigned y = 0; y < this->height(); y++) {
	 cs225:: HSLAPixel & pixel = this->getPixel(x,y);
         if (pixel.s - amount < 0) {
           pixel.s = 0;
         } else {
           pixel.s -= amount;
         }
       }
     }

   }

   void Image::grayscale() {
     for (unsigned x = 0; x < this->width(); x++) {
       for (unsigned y = 0; y < this->height(); y++) {
	 cs225:: HSLAPixel & pixel = this->getPixel(x, y);
	 pixel.s = 0;
       }
     }
   }

   void Image::illinify() {
     for (unsigned int x = 0; x < this->width(); x++) {
       for (unsigned int y = 0; y < this->height(); y++) {
	 cs225::HSLAPixel & pixel = this->getPixel(x, y);
	 // if the pixel hue is exactly in between 11 and 216, set it to orange
	 if (pixel.h <= 113.5 || pixel.h >= 293.5) {
	   pixel.h = 11.0;
	 } else if (pixel.h > 113.5 && pixel.h < 293.5) {
	   pixel.h = 216.0;
	 }
       }
     } 
   }

   void Image::lighten() {
     for (unsigned x = 0; x < this->width(); x++) {
       for (unsigned y = 0; y < this->height(); y++) {
	 cs225:: HSLAPixel & pixel = this->getPixel(x,y);
         if (pixel.l > 0.9) {
           pixel.l = 1.0;
         } else {
           pixel.l += 0.1;
         }
       }
     }

   }

   void Image::lighten(double amount) {
     for (unsigned x = 0; x < this->width(); x++) {
       for (unsigned y = 0; y < this->height(); y++) {
	 cs225:: HSLAPixel & pixel = this->getPixel(x,y);
         if (pixel.l + amount > 1.0) {
           pixel.l = 1.0;
         } else {
           pixel.l += amount;
         }
       }
     }
   }

   void Image::rotateColor(double degrees) {
     for (unsigned x = 0; x < this->width(); x++) {
       for (unsigned y = 0; y < this->height(); y++) {
	 cs225:: HSLAPixel & pixel = this->getPixel(x,y);
	 if (pixel.h + degrees > 360) {
				//do math
	 } else {
	   pixel.h += degrees;
	 }
       }
     }
   }

   void Image::saturate() {
   }

   void Image::saturate(double amount) {
   }

   void Image::scale(double factor) {
   }

   void Image::scale(unsigned w, unsigned h) {
   }
