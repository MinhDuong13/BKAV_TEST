//------------------------------------------------------------------------
// Name: point
// Description: INPUT: X-coordinatey and Y-coordinate, change, move, print
//------------------------------------------------------------------------
class Point {
	int m_nXcoordinatey; //Hoanh do X
	int m_nYcoordinatey; //Trung do Y
public:
	Point(int, int);
	int getX(void);
	int getY(void);
	void movePoint(void);
};