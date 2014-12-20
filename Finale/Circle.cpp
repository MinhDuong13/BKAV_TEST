#include "Circle.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

Circle::Circle(int xO, int yO, int R) {
	fstream inpFile("INPUT.DAT");
	char input[100];

	inpFile.getline(input, 100, 'T');
	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string xo(input);
	xO = atoi(xo.c_str());
	m_nXCentre = xO;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string yo(input);
	yO = atoi(yo.c_str());
	m_nYCentre = yO;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string r(input);
	R = atoi(r.c_str());
	m_nRadius = R;
	inpFile.close();
}

int Circle::getXCentre() {

	return m_nXCentre;
}

int Circle::getYCentre() {

	return m_nYCentre;
}

int Circle::getRadius() {

	return m_nRadius;
}

int Circle::getXMax() {

	return (m_nXCentre + m_nRadius);
}

int Circle::getXMin() {

	return (m_nXCentre - m_nRadius);
}

int Circle::getYMax() {

	return (m_nYCentre + m_nRadius);
}

int Circle::getYMin() {

	return (m_nYCentre - m_nRadius);
}

Circle::~Circle()
{
}
