/*i*
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once
#include "Image.h"
#include <vector>
using std::vector;
using std::tuple;

class Sticker {
    public:
        Sticker(Image& image, int x, int y);
		~Sticker();
	    void stickerCopy(Sticker const& other);
        Sticker(Sticker& other);
        const Sticker &operator=(const Sticker &other);
	    bool operator!=(const Sticker &other);
	    bool operator==(const Sticker &other);
	    void addCoordinates();
	    unsigned int layer;
	    vector<int> coordinates_;
        Image* image_;
	    vector<vector< int>> image_coordinates_;
};

class StickerSheet {	
  public:
	StickerSheet (const Image &picture, unsigned max);
	~StickerSheet ();
	StickerSheet (const StickerSheet &other);
	const StickerSheet& operator= (const StickerSheet& other);
	void changeMaxStickers (unsigned max);
	int addSticker (Image &sticker, unsigned x, unsigned y);
	bool translate (unsigned index, unsigned x, unsigned y);
	void removeSticker (unsigned index);
	Image* getSticker (unsigned index);
	Image render() const;
	void copy(StickerSheet const& other);
	void destroy();

	unsigned capacity;
	unsigned int max_;
	vector<Sticker*> stickers_;
	Image base_image_;
};

