#pragma once
#include <iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point() : x(0), y(0) {}
	Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}
	void Print() const;
	Point& operator --();
	Point& operator ++();
	bool operator >(const Point& other) const;
	bool operator <(const Point& other) const;
	/*{
		return (x * x + y * y) < (other.x * other.x + other.y * other.y);
	}*/
	Point operator !() const;
};

