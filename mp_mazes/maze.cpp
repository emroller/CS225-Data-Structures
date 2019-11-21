#include "maze.h"
#include "cs225/PNG.h"
#include "dsets.h"
#include <vector>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <queue>
#include <utility>

using namespace std;
using namespace cs225;

SquareMaze::SquareMaze() {
	width_ = 0;
	height_ = 0;
	disjoint = new DisjointSets();
	track = new vector<WallUp>;
	
}


void SquareMaze::makeMaze(int width, int height) {
	width_ = width;
	height_ = height;
	int mazedim = width_ * height_;
	disjoint->addelements(width * height);

	for (int squares = 0; squares < mazedim; squares++)
		track->push_back(WallUp(true, true));

	while ( edges !=  (width*height) - 1 )
	{

		int wall = rand() % (width*height);
		int neighbor = rand() % 2;

		if ( neighbor == 0 && findX (wall) != width-1 )
		{
			if ( D.find( wall ) != D.find( wall+1 ) )
			{
				setWall( findX( wall ), findY( wall ), 0, false );
				D.setunion ( wall, wall + 1);
				edges++;
			}
		}
		else if ( neighbor == 1 && findY( wall ) != height -1 )
		{
			if ( D.find( wall ) != D.find( wall + width ) )
			{
				setWall( findX( wall ), findY( wall ), 1, false );
				D.setunion( wall, wall + width );
				edges++;
			}
		}
	}

/*
	for (int i = 0; i < mazedim - 1; i++) {
		vector<int> directions;
		 if ( ((i + 1) % width_ != 0) && (disjoint->find(i) != disjoint->find(i+1)) ) {
			directions.push_back(0);
		}
		if ( !(i >= (width_ * (height_ - 1))) &&
			 (disjoint->find(i) != disjoint->find(i+width_)) ) {
			directions.push_back(1);
		}
		if ( !(i % width_ == 0) &&
			 (disjoint->find(i) != disjoint->find(i-1)) ) {
			directions.push_back(2);
		}
		if ( !(i < width_) &&
			 (disjoint->find(i) != disjoint->find(i-width_)) ) {
			directions.push_back(3);
		}

		if (directions.size() == 0) continue;
		int direction = directions[rand() % directions.size()];

		if (direction == 0) {
			disjoint->setunion(i, i+1);
			(*track)[i].right = false; 
		}else if (direction == 1) {
			disjoint->setunion(i, i+width_);
			(*track)[i].down = false;
		}else if (direction == 2) {
			disjoint->setunion(i, i-1);
			(*track)[i-1].right = false;
		}else if (direction == 3) {
			disjoint->setunion(i, i-width_);
			(*track)[i-width_].down = false;
		}
	}
*/
}

bool SquareMaze::canTravel(int x, int y, int dir) const {
	switch(dir) {
 	/* dir = 0 represents a rightward step (+1 to the x coordinate) */
		case 0:
			// if we are at the rightmost edge
			if (x >= width_-1){ 
				return false;
			}
			// otherwise see if there is a wall to the right
			return !((*track)[x + y * width_].right);

 	/* dir = 1 represents a downward step (+1 to the y coordinate) */
		case 1:
			if (y > height_ - 2) return false;

			return !((*track)[x + y * width_].down);

 	/* dir = 2 represents a leftward step (-1 to the x coordinate) */
		case 2:
			if (x < 1) return false;
			return !((*track)[x-1 + y * width_].right);

 	/* dir = 3 represents an upward step (-1 to the y coordinate) */
		case 3:
			if (y < 1) return false;
			return !((*track)[x+ (y-1) * width_].down);
		default:
			return false;

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


