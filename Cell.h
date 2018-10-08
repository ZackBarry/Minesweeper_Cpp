#pragma once

#ifndef Cell_H
#define Cell_h

// a Cell is a square in the Minesweeper game
class Cell {
public:
	int x;			// coordinate within the board
	int y;
	bool bomb;		// true if the Cell holds a bomb
	bool marked;	// true if the user right clicks the Cell
	int touching;	// number of bombs a Cell touches
	bool covered;	// true if Cell has never been clicked on
	Cell();
	Cell(int, int, bool);	// include coordinate and bomb status
};

#endif // !Cell_H