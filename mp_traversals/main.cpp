
#include "cs225/PNG.h"
#include "FloodFilledImage.h"
#include "Animation.h"

#include "imageTraversal/DFS.h"
#include "imageTraversal/BFS.h"

#include "colorPicker/RainbowColorPicker.h"
#include "colorPicker/GradientColorPicker.h"
#include "colorPicker/GridColorPicker.h"
#include "colorPicker/SolidColorPicker.h"
#include "colorPicker/MyColorPicker.h"

using namespace cs225;

int main() {

  // @todo [Part 3]
  // - The code below assumes you have an Animation called `animation`
  // - The code provided below produces the `myFloodFill.png` file you must
  //   submit Part 3 of this assignment -- uncomment it when you're ready.
  
 	PNG png;
	png.readFromFile("pacman-solid-bfs-2.png");
  
	BFS bfs(png, Point(2,2), 0.1 );
	//HSLAPixel color1(350, 0.5, 0.3);
	//HSLAPixel color2(10, 0.9,0.1);
	//HSLAPixel color3(180, 0.8, 0.8);
	MyColorPicker mcp(0.5);
	MyColorPicker mcp2(0.7);

	FloodFilledImage ffi(png);
	ffi.addFloodFill(bfs, mcp);
	ffi.addFloodFill(bfs, mcp2);
	Animation animation = ffi.animate(1000);

	PNG lastFrame = animation.getFrame( animation.frameCount() - 1 );
  	lastFrame.writeToFile("myFloodFill.png");
  	animation.write("myFloodFill.gif");
  return 0;
}
