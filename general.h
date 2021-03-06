#pragma once
#include "Point.h"
#include "Board.h"

class general {


public:

	general() {};
	virtual bool update(Board& board, int serialNum, int dir) = 0;

	virtual void print(Board& board) = 0;
	virtual Point* getBodyPos()const = 0;
	virtual int getSerial()const = 0;

};