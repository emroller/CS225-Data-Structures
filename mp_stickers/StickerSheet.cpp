
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

void Sticker::addCoordinates()  {

	for (int x = coordinates_[0]; x < (int)(coordinates_[0] + image_->width()); x++) {
		if (coordinates_[1] - image_->height() < 0) {	//if the image exceeds the first quadrant plane
			std::cout<<"here"<<std::endl;
			for (int y = 0; y < (int)image_->height(); y++) {
				vector<int> pair = {x,y};
				image_coordinates_.push_back(pair);	
			} 
		} else {
			for (int y = (coordinates_[1] - image_->height()); y < coordinates_[1]; y++) {
				vector<int> pair = {x,y};
				image_coordinates_.push_back(pair);
			}
		}
	}
}

Sticker::Sticker( Image& image, int x, int y) {
		coordinates_.push_back(x);
		coordinates_.push_back(y);
        image_ = &image;
		addCoordinates();
}

Sticker::~Sticker() {
	//delete image_;
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
	cout<<picture.width()<< " " << picture.height()<<endl;
	base_image_ = new Image();
	*base_image_ = picture;
}


StickerSheet::~StickerSheet () {
	for (unsigned int i = 0; i < stickers_.size(); i++) {
		delete stickers_[i];
		stickers_[i] = NULL;
	}
	delete base_image_;
}

StickerSheet::StickerSheet (const StickerSheet &other) {	    
	copy(other);	
}

const StickerSheet& StickerSheet::operator= (const StickerSheet& other) {
//	if (*this != other) {
		copy(other);
//	}
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
	Sticker* newSticker = new Sticker(sticker, x, y);
	newSticker->layer = stickers_.size();
	stickers_.push_back(newSticker);
	//newSticker->layer  = stickers_.size();
	return newSticker->layer;
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
		for (unsigned int i =0; i < stickers_.size(); i++) {
			if (stickers_[i]->layer == index) {
				stickers_.erase(stickers_.begin()+ index);
			} else if (stickers_[i]->layer > index) {
				stickers_[i]->layer--;
			}
		}
	}
}

Image* StickerSheet::getSticker (unsigned index) {
	cout<<"Haw"<<endl;
	for (Sticker* stick : stickers_) {
		cout<<stick->layer<<endl;
		cout<<index<<endl;
		if (stick->layer == index) {
			std::cout<<"layer"<<endl;
			return stick->image_;
		}
	}
	return NULL;
}

Image StickerSheet::render() const {
std::cout<<base_image_->width()<< " x " <<base_image_->height()<<std::endl;
    Image* image = new Image();
	image->resize(base_image_->width(), base_image_->height()); 
	std::cout<<"resize"<<std::endl;
	for (unsigned int x = 0; x < image->width(); x++) {
		for (unsigned int y = 0; y < image->height(); y++) {
			cs225::HSLAPixel & pixel = image->getPixel(x, y);
			pixel = base_image_->getPixel(x, y);
		}
	}

	for (unsigned int x= 0;  x < image->width(); x++) {
		for (unsigned int y = 0; y<  image->height(); y++) {
			//for (Sticker* stick : stickers_) {
			//	for (vector<int> vec: stick->image_coordinates_) {
			//		if (x == (unsigned)vec[0]  && y == (unsigned)vec[1]) {
			//			cs225::HSLAPixel& pixel = image->getPixel(x,y);
			//			pixel = stick->image_->getPixel(x,y);
			//		}
			//	}	    			
		//	}

		}
	}

	return *image;

}
void StickerSheet::copy(StickerSheet const& other) {
	stickers_.clear();
	max_ = other.max_;
	for (unsigned i = 0; i < other.stickers_.size(); i++) {
		Sticker* pointer  = new Sticker(*(other.stickers_[i]));
		stickers_[i] = pointer;
	}
	
}

