
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
