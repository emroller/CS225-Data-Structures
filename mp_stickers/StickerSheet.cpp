
#include <iostream>
using std::cerr;
using std::endl;

#include <string>
using std::string;

#include <cassert>
#include <algorithm>
#include <functional>

#include "StickerSheet.h"

void Sticker::addCoordinates()  {
	for (unsigned int x = coordinates_[0]; x < (x + image_->width()); x++) {
		for (int y = coordinates_[1] -  (image_->height()) + 1; y < coordinates_[1] + 1; y++) {
			//image_coordinates_.push_back(tuple<int, int>(x, y));
			image_coordinates_.push_back(vector<int>{static_cast<int>(x), static_cast<int>(y)});
		}
	}
}

Sticker::Sticker( Image& image, int x, int y) {
        coordinates_.push_back(y);
		coordinates_.push_back(x);
        image_ = &image;
		addCoordinates();
}

void Sticker::stickerCopy(Sticker const& other)  {
    for (unsigned int i = 0; i < other.coordinates_.size(); i++) {
        coordinates_.push_back(other.coordinates_.at(i));
    }
}

Sticker::Sticker(Sticker& other) {
    stickerCopy(other);    
	image_ = new Image(*other.image_);
	addCoordinates();
}

const Sticker & Sticker::operator=(const Sticker &other)  {
		coordinates_.clear(); 
       if (*this != other) {
        	stickerCopy(other);
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


StickerSheet::StickerSheet (const Image &picture, unsigned max) {
    max_ = max;
    *base_image_ = picture;
	layers_ =  0;
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
	stickers_.resize(max);
	max_ = max;  
}

int StickerSheet::addSticker (Image &sticker, unsigned x, unsigned y) {
	if (stickers_.size() == max_)  { // if we already have the max number of stickers in the vector
		return -1;
	}
	// make a new sticker and add it to the vector of stickers
   	Sticker newSticker(sticker, x, y);
	stickers_.push_back(&newSticker);
	newSticker.layer  = stickers_.size();
	return newSticker.layer;
} 

bool StickerSheet::translate (unsigned index, unsigned x, unsigned y) {
    if  (index > max_)  {
		return false;
	}
	for (Sticker* stick: stickers_) {
		if (stick->layer == index) {
			stick->coordinates_[0] = x;
			stick->coordinates_[1] = y;
		}
	}
	return true;
}
void StickerSheet::removeSticker (unsigned index) {
}

Image* StickerSheet::getSticker (unsigned index) {
    return nullptr;
}
Image StickerSheet::render() const {
    Image* image = new Image();
	image->resize(base_image_->width(), base_image_->height()); 
    for (unsigned int x = 0; x < image->width(); x++) {
		for (unsigned int y = 0; y < image->height(); y++) {
			cs225::HSLAPixel & pixel = image->getPixel(x, y);
			pixel = base_image_->getPixel(x, y);
		}
	}

	for (unsigned int x= 0;  x < image->width(); x++) {
		for (unsigned int y = 0; y<  image->height(); y++) {
			for (Sticker* stick : stickers_) {
				for (vector<int> vec: stick->image_coordinates_) {
					if (x == (unsigned)vec[0]  && y == (unsigned)vec[1]) {
						cs225::HSLAPixel& pixel = image->getPixel(x,y);
						pixel = stick->image_->getPixel(x,y);
					}
				}	    			
			}

		}
	}

	return *image;

}
void StickerSheet::copy(StickerSheet const& other) {
	stickers_.clear();
	layers_ = other.layers_;
	max_ = other.max_;
	for (unsigned i = 0; i < other.stickers_.size(); i++) {
		Sticker* pointer  = new Sticker(*(other.stickers_[i]));
		stickers_[i] = pointer;
	}
	
}


