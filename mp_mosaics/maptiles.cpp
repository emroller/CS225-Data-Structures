/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
#include "kdtree.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

/**
 * @param: SourceImage, the image to turn into a mosaic
 * @param: theTiles, a constant reference to a std::vector of TileImage objects in that order
 * Creates a new dynamically allocated MosaicCanvas, with the same number of rows and columns as the SourceImage
 * For every region in the SourceImage, mapTiles() should take the TileImage with average color closest to the average color of that region and place that TileImage into the MosaicCanvas in the same tile position as the SourceImage’s region
 * Each tile in the MosaicCanvas should be set to an appropriate TileImage, using a KDTree to find the Nearest Neighbor for each region. 
 * @return: a pointer to the MosaicCanvas
 */

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
	
	unsigned int rows = theSource.getRows();
	unsigned int columns = theSource.getColumns();

	MosaicCanvas* mosaic = new MosaicCanvas(rows, columns);
	
	map<Point<3>, int> track;
	vector<Point<3>> avg;

	for (unsigned i = 0; i < theTiles.size(); i++) {
		LUVAPixel pixelColor = theTiles[i].getAverageColor();
		avg.push_back(convertToXYZ(pixelColor));
		track[convertToXYZ(pixelColor)] = i;
	}

	KDTree<3> colorTree(avg);
	for (unsigned int i = 0; i < rows; i++) {
		for (unsigned int j = 0; j < columns; j++) {
			LUVAPixel colors = theSource.getRegionColor(i, j);
			Point<3> curr = colorTree.findNearestNeighbor(convertToXYZ(colors));
			mosaic->setTile(i, j, &theTiles[track[curr]]);
		}
	}
	return mosaic;
}

