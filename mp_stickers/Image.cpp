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
     unsigned w = this->width();
     unsigned h = this->height();
     
     for (unsigned x = 0; x < w; x++) {
       for (unsigned y = 0; y < h; y++) {
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
     unsigned w = this->width();
     unsigned h = this->height();

     for (unsigned x = 0; x < w; x++) {
       for (unsigned y = 0; y < h; y++) {
	 cs225:: HSLAPixel & pixel = this->getPixel(x,y);
         if (pixel.l < amount) {
           pixel.l = 0;
         } else {
           pixel.l -= amount;
         }
       }
     }
   }

   void Image::desaturate() {
   }

   void Image::desaturate(double amount) {
   }

   void Image::grayscale() {
   }

   void Image::illinify() {
   }

   void Image::lighten() {
   }

   void Image::lighten(double amount) {
   }

   void Image::rotateColor(double degrees) {
   }

   void Image::saturate() {
   }

   void Image::saturate(double amount) {
   }

   void Image::scale(double factor) {
   }

   void Image::scale(unsigned w, unsigned h) {
   }
