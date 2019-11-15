#pragma once

#include <vector>
#include "cs225/PNG.h"
#include "dsets.h"
using namespace cs225;

/* Each SquareMaze object represents a randomly-generated square maze and its solution. */
class SquareMaze {
	public: 
	struct WallUp {
		WallUp(bool r, bool d) {
			right = r;
			down = d;
		}
		bool right;
		bool down;
	};

	int width_;
	int height_;

	// maze with square connection
	DisjointSets* disjoint;
	
	// 2d vec of maze walls up
	std::vector<std::vector<WallUp>> track;

	// array of points visited
//	std::vector<std::pair<int, int>> points;

	// count of walls broken
	int count_walls_broken = 0;
	/* 
 	 * no-parameter constructor
 	 * returns an empty maze
 	 */
	SquareMaze();

	/* 
 	* Return if it's possible to travel in the given direction from the square at coordinates (x,y)
 	*
 	* dir = 0 represents a rightward step (+1 to the x coordinate)
 	* dir = 1 represents a downward step (+1 to the y coordinate)
 	* dir = 2 represents a leftward step (-1 to the x coordinate)
 	* dir = 3 represents an upward step (-1 to the y coordinate)
 	* You can not step off of the maze or through a wall.
 	*
 	* PARAMS
 	* x: The x coordinate of the current cell
 	* y: The y coordinate of the current cell
 	* dir: The desired direction to move from the current cell
 	*/
	bool canTravel(int x, int y, int dir) const;

	/*
 	* Makes a new SquareMaze of the given height and width
 	*/ 
	void makeMaze(int width, int height);


	/* 
 	 *	Sets whether or not the specified wall exists
 	 *  x: The x coordinate of the current cell
 	 *  y: The y coordinate of the current cell
 	 *  dir: Either 0 (right) or 1 (down), which specifies which wall to set
 	 *  exists: true if setting the wall to exist, false otherwise
 	 */ 
	void setWall(int x, int y, int dir, bool exists);

	/*
 	 *	Solves this SquareMaze
 	 */ 
	std::vector<int> solveMaze();

	/*
 	 *  Draws the maze without the solution.
 	 * The resulting PNG will look like the sample image, except there will be no exit from the maze and the red line will be missing.
 	 */	 
	PNG* drawMaze() const;

	/*
 	 * This function calls drawMaze, then solveMaze; it modifies the PNG from drawMaze to show the solution vector and the exit.
 	 */
	PNG* drawMazeWithSolution();

	

};
