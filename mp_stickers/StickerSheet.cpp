
#include <iostream>
using std::cerr;
using std::endl;

#include <string>
using std::string;

#include <cassert>
#include <algorithm>
#include <functional>

#include "StickerSheet.h"

StickerSheet::StickerSheet (const Image &picture, unsigned max) {
    max_ = max;
    base_image = picture;
    x_coord = new int[max];
    y_coord = new int[max];
    indices = new int[max];
    stickers = new Image*[max];
}
StickerSheet::~StickerSheet () {
    delete x_coord;
    delete y_coord;
    delete indices;
    delete stickers;
}
StickerSheet::StickerSheet (const StickerSheet &other) {	    
    x_coord = NULL;
	y_coord = NULL;
	indices = NULL;
	stickers = NULL;
	copy(other);
}

const StickerSheet& StickerSheet::operator= (const StickerSheet& other) {
    if (this != &other) {
		 copy(other);
	 }
    return *this;
}
void StickerSheet::changeMaxStickers (unsigned max) {
    	
}
int StickerSheet::addSticker (Image &sticker, unsigned x, unsigned y) {
   return 1;
} 

bool StickerSheet::translate (unsigned index, unsigned x, unsigned y) {
    return false;
}
void StickerSheet::removeSticker (unsigned index) {
}
Image* StickerSheet::getSticker (unsigned index) {
    return nullptr;
}
Image StickerSheet::render() const {
    Image i; 
    return i;

}
void StickerSheet::copy(StickerSheet const& other) {
    //clear self
    delete x_coord;
    delete y_coord;
    delete indices;
    delete stickers;

   //copy other to self
    max_ = other.max_;
    base_image = other.base_image;
    x_coord = new int[max_];
    y_coord = new int[max_];
    indices = new int[max_];
    stickers = new Image*[max_];
    for (int i = 0; i < max_; i++) {
        x_coord[i] = other.x_coord[i];
        y_coord[i] = other.y_coord[i];
        indices[i] = other.indices[i];
        stickers[i] = other.stickers[i];
    }
}
	
