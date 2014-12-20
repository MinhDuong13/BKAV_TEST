#include "Rectangle.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

Rectangle::Rectangle(int x, int y, int a, int b) {
	fstream inpFile("INPUT.DAT", ios::in | ios::out);
	char input[100];

	inpFile.getline(input, 100, 'C');
	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string x1(input);
	x = atoi(x1.c_str());
	m_nXAngle = x;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string y1(input);
	y = atoi(y1.c_str());
	m_nYAngle = y;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string a1(input);
	a = atoi(a1.c_str());
	m_nLength = a;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string b1(input);
	b = atoi(b1.c_str());
	m_nWidth = b;
	inpFile.close();
}

int Rectangle::getXAngle() {

	return m_nXAngle;
}

int Rectangle::getYAngle() {

	return m_nYAngle;
}

int Rectangle::getLength() {

	return m_nLength;
}

int Rectangle::getWidth() {

	return m_nWidth;
}

int Rectangle::getXMax() {

	return (m_nXAngle + m_nLength);
}

int Rectangle::getXMin() {

	return m_nXAngle;
}

int Rectangle::getYMax() {

	return m_nYAngle;
}

int Rectangle::getYMin() {

	return (m_nYAngle - m_nWidth);
}

Rectangle::~Rectangle()
{
}
