/* Your code here! */
#include "maze.h"
using std::vector;
using std::pair;

SquareMaze::SquareMaze() { 
	width_ = 0;
	height_ = 0;
	disjoint = new DisjointSets();
}

void SquareMaze::makeMaze(int width, int height) {
	int mazedim = width * height;
	// initialize maze with walls up
	WallUp initialize_walls(true, true);

	// a bunch of unconnected squares - all walls up
	disjoint->addelements(mazedim);

	// 2D track - all walls up, width x height
	track = vector<vector<WallUp>> (width, vector<WallUp>(height, initialize_walls));
	
	// 2D grid of all the squares in the maze 
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			points.push_back(pair<int, int> (i, j));
		}		
	}
	// shuffle all the points in the maze
	random_shuffle(points.begin(), points.end());

	// for each point in the maze, determine the possible walls to break down
	// choose a random direction
	// join the corresponding points in the disjoint set
	for (pair<int ,int> point : points) {
		if (canTravel(point.first, point.second, 0)) {

		} else if (canTravel(point.first, point.second, 1)) {

		} else if (canTravel(point.first, point.second, 2)) {

		} else if (canTravel(point.first, point.second, 3)) {

		}	
	}
}

bool SquareMaze::canTravel(int x, int y, int dir) const {
	switch(dir) {
 	/* dir = 0 represents a rightward step (+1 to the x coordinate) */
		case 0:
			// if we are at the rightmost edge
			if (x > width_-2) return false;
			// otherwise see if there is a wall to the right
			return !(track[x][y].right);

 	/* dir = 1 represents a downward step (+1 to the y coordinate) */
		case 1:
			if (y > height_ - 2) return false;
			return !(track[x][y].down);

 	/* dir = 2 represents a leftward step (-1 to the x coordinate) */
		case 2:
			if (x < 1) return false;
			return !(track[x-1][y].right);

 	/* dir = 3 represents an upward step (-1 to the y coordinate) */
		case 3:
			if (y < 1) return false;
			return !(track[x][y-1].down);

	/* shouldn't get here? */
		default: return false;
	}
}

/*  dir: Either 0 (right) or 1 (down), which specifies which wall to set */
void SquareMaze::setWall(int x, int y, int dir, bool exists) {
	if (dir == 0) track[x][y].right = exists;
	else if (dir == 1) track[x][y].down = exists;  
}

vector<int> SquareMaze::solveMaze() { 
	return vector<int>();
}

PNG* SquareMaze::drawMaze() const { 
	return nullptr; 
}

PNG* SquareMaze::drawMazeWithSolution() { 
	return nullptr;
}


