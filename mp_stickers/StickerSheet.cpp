
#include <iostream>
using std::cerr;
using std::endl;
using std::cout;

#include <string>
using std::string;

#include <cassert>
#include <algorithm>
#include <functional>

#include "StickerSheet.h"

//oid Sticker::addCoordinates()  {
//
//	for (int x = coordinates_[0]; x < (int)(coordinates_[0] + image_->width()); x++) {
////		if (coordinates_[1] - image_->height() < 0) {	//if the image exceeds the first quadrant plane
//			for (int y = 0; y < (int)image_->height(); y++) {
//				vector<int> pair = {x,y};
//				image_coordinates_.push_back(pair);	
//			} 
//		} else {
//			for (int y = (coordinates_[1] - image_->height()); y < coordinates_[1]; y++) {
//				vector<int> pair = {x,y};
//				image_coordinates_.push_back(pair);
//			}
//		}
//	}
//}

Sticker::Sticker( Image& image, int x, int y) {
		coordinates_.push_back(x);
		coordinates_.push_back(y);
        image_ = &image;
//		addCoordinates();
}

Sticker::~Sticker() {
	//delete image_;
	coordinates_.clear();	
}

void Sticker::stickerCopy(Sticker const& other)  {
	image_ = other.image_;
    for (unsigned int i = 0; i < other.coordinates_.size(); i++) {
        coordinates_.push_back(other.coordinates_.at(i));
    }
}

Sticker::Sticker(Sticker& other) {
    stickerCopy(other);    
}

const Sticker & Sticker::operator=(const Sticker &other)  {
		coordinates_.clear(); 
       if (*this != other) {
        	stickerCopy(other);
		}
        image_ = other.image_;
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
	capacity = 0;
	base_image_ = picture;
}


StickerSheet::~StickerSheet () {
//	stickers_.clear();
	destroy();
}

void StickerSheet::destroy() {
//	for (unsigned int i = 0; i < stickers_.size(); i++) {
//		delete stickers_[i];
		//stickers_[i] = NULL;
//	}
	stickers_.clear();
	
}

StickerSheet::StickerSheet (const StickerSheet &other) {	    
	copy(other);	
}

const StickerSheet& StickerSheet::operator= (const StickerSheet& other) {
	if (this != &other) {
		destroy();
		copy(other);
	}
	return *this;
}

void StickerSheet::changeMaxStickers (unsigned max) {
	stickers_.resize(max);
	if  (max < capacity) {
		capacity = max;
	}
	max_ = max;  
}

int StickerSheet::addSticker (Image &sticker, unsigned x, unsigned y) {
	if (capacity == max_)  { // if we already have the max number of stickers in the vector
		return -1;
	}
	Sticker* stick = new Sticker(sticker, x , y);
	stickers_.push_back(stick);
	capacity++;
	return capacity - 1;
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
	if (index >= 0 && index < stickers_.size()) {
		for (unsigned int i =0; i < capacity; i++) {
			if (stickers_[i]->layer == index) {
				stickers_.erase(stickers_.begin()+ index);
			} else if (stickers_[i]->layer > index) {
				stickers_[i]->layer--;
			}
		}
	}
	capacity--;
}

Image* StickerSheet::getSticker (unsigned index) {
	if (index < max_) {
		return stickers_[index]->image_;
	}
	return NULL;
}

Image StickerSheet::render() const {
	cout<<stickers_[0]->coordinates_[0]<<stickers_[0]->coordinates_[1]<<endl;
	cout<<stickers_[0]->image_<<endl;
	cout<<"finished"<<endl;

	//find max sticker boundaries
	unsigned w = 0;	
	unsigned h = 0;
	for (unsigned i = 0; i < capacity; i++) {
		cout<<stickers_.size()<<endl;
		if (stickers_[i]->image_->width() + stickers_[i]->coordinates_[0] > w) {
			w = stickers_[i]->image_->width() + stickers_[i]->coordinates_[0];
		}
		if (stickers_[i]->image_->height() + stickers_[i]->coordinates_[1] > h) {
			h = stickers_[i]->image_->height() + stickers_[i]->coordinates_[1];
		}
	}
	Image image = this->base_image_;
	w = std::max(base_image_.width(), w); 
	h = std::max(base_image_.height(), h);

cout<<"capacity: "<<capacity<<endl;

	image.resize(w,h);
	for (unsigned i = 0; i < capacity; i++) {
		int x = stickers_[i]->coordinates_[0];
		int y = stickers_[i]->coordinates_[1];
		
		for (unsigned i = 0; i < stickers_[i]->image_->width(); i++) {
			for (unsigned j = 0; j < stickers_[i]->image_->height(); j++) {
				cs225::HSLAPixel& pixel = stickers_[i]->image_->getPixel(i,j);
				cs225::HSLAPixel& base_pixel = image.getPixel(i+x,j+y);
				
				if (pixel.a > 0) {
					base_pixel = pixel;
				}	
			}
		}
	}
	return image;
}
void StickerSheet::copy(StickerSheet const& other) {
	stickers_.clear();
	max_ = other.max_;
	stickers_ = other.stickers_;	
}

