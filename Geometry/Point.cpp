#include "Point.h"
#include <iostream>

using namespace std;

//Thiet lap diem
Point::Point(int x, int y) {
	m_nXcoordinatey = x;
	m_nYcoordinatey = y;
}

//Lay hoanh do
int Point::getX() {

	return m_nXcoordinatey;
}

//Lay tung do
int Point::getY() {

	return m_nYcoordinatey;
}

//Tinh tien diem
void Point::movePoint() {
	int a, b;
	cout << endl << "Nhap vecto tinh tien v:" << endl;
	cin >> a;
	cin >> b;
	cout << "Tinh tien theo vecto v: ";
	cout << "(" << (m_nXcoordinatey + a) << ", " << (m_nYcoordinatey + b) << ")";
}