
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
    *base_image_ = picture;
}
StickerSheet::~StickerSheet () {
}

StickerSheet::StickerSheet (const StickerSheet &other) {	    
	copy(other);	
}

const StickerSheet& StickerSheet::operator= (const StickerSheet& other) {
	//if (*this != other) {
		copy(other);
	//}
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
	stickers_.clear();
	max_ = other.max_;
	for (unsigned i = 0; i < other.stickers_.size(); i++) {
		Sticker* pointer  = new Sticker(*(other.stickers_[i]));
		stickers_[i] = pointer;
	}
	
}	

Sticker::Sticker(vector<int> coordinates, Image& image) {
	coordinates_ = coordinates;
	image_ = &image;
}

Sticker::Sticker(Sticker& other) {
	for (unsigned int i = 0; i < other.coordinates_.size(); i++) {
		coordinates_.push_back(other.coordinates_.at(i));
	}
	image_ = new Image(*other.image_);
}

const Sticker & Sticker::operator=(const Sticker &other)  {
	if (*this != other) {
		for (unsigned int i = 0; i < other.coordinates_.size(); i++) {
                coordinates_.push_back(other.coordinates_.at(i));
        	}
	}	
        image_ = new Image(*other.image_);
	return *this;
}

bool Sticker::operator!=(const Sticker &other) {
	return !(*this == other);
}

bool Sticker::operator==(const Sticker &other) {
    if (image_ == other.image_ && coordinates_.size()== other.coordinates_.size()){
	for (unsigned int  i = 0; i < coordinates_.size();i ++) {
	     if (coordinates_[i] != other.coordinates_[i]) {
		return false;
	     }
	}
    } else{
	return false;
    }
    return true;
}
