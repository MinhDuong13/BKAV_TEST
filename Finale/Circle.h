#pragma once
class Circle
{
	int m_nXCentre;
	int m_nYCentre;
	int m_nRadius;
public:
	Circle(int, int, int);
	int getXCentre();
	int getYCentre();
	int getRadius();
	int getXMax();
	int getYMax();
	int getXMin();
	int getYMin();
	~Circle();
};

