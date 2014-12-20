#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Triangle.h"

using namespace std;

Triangle::Triangle(int xA, int yA, int xB, int yB, int xC, int yC) {
	fstream inpFile("INPUT.DAT", ios::in | ios::out);
	char input[100];
	
	inpFile.getline(input, 100, 'G');
	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string xa(input);
	xA = atoi(xa.c_str());
	m_nXAngleA = xA;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string ya(input);
	yA = atoi(ya.c_str());
	m_nYAngleA = yA;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string xb(input);
	xB = atoi(xb.c_str());
	m_nXAngleB = xB;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string yb(input);
	yB = atoi(yb.c_str());
	m_nYAngleB = yB;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string xc(input);
	xC = atoi(xc.c_str());
	m_nXAngleC = xC;

	inpFile.getline(input, 100, '[');
	inpFile.getline(input, 100, ']');
	string yc(input);
	yC = atoi(yc.c_str());
	m_nYAngleC = yC;
	inpFile.close();
}

//Lay hoanh do dinh thu nhat
int Triangle::getXAngleA() {

	return m_nXAngleA;
}

//Lay tung do dinh thu nhat
int Triangle::getYAngleA() {

	return m_nYAngleA;
}

//Lay haonh do dinh thu hai
int Triangle::getXAngleB() {

	return m_nXAngleB;
}

//Lay tung do dinh thu hai
int Triangle::getYAngleB() {

	return m_nYAngleB;
}

//Lay haonh do dinh thu ba
int Triangle::getXAngleC() {

	return m_nXAngleC;
}

//Lay tung do dinh thu ba
int Triangle::getYAngleC() {

	return m_nYAngleC;
}

int Triangle::getXMax() {
	int max1 = (m_nXAngleA > m_nXAngleB) ? m_nXAngleA : m_nXAngleB;
	int max2 = (max1 > m_nXAngleC) ? max1 : m_nXAngleC;

	return max2;
}

int Triangle::getXMin() {
	int min1 = (m_nXAngleA < m_nXAngleB) ? m_nXAngleA : m_nXAngleB;
	int min2 = (min1 < m_nXAngleC) ? min1 : m_nXAngleC;

	return min2;
}

int Triangle::getYMax() {
	int max1 = (m_nYAngleA > m_nYAngleB) ? m_nYAngleA : m_nYAngleB;
	int max2 = (max1 > m_nYAngleC) ? max1 : m_nYAngleC;

	return max2;
}

int Triangle::getYMin() {
	int min1 = (m_nYAngleA < m_nYAngleB) ? m_nYAngleA : m_nYAngleB;
	int min2 = (min1 < m_nYAngleC) ? min1 : m_nYAngleC;

	return min2;
}

Triangle::~Triangle()
{
}