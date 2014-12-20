#include "Triangle.h"
#include <iostream>
#include <math.h>

using namespace std;

//Thiet lap tam giac
Triangle::Triangle(int xA, int yA, int xB, int yB, int xC, int yC) {
	m_nXAngleA = xA;
	m_nYAngleA = yA;
	m_nXAngleB = xB;
	m_nYAngleB = yB;
	m_nXAngleC = xC;
	m_nYAngleC = yC;
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

//Tinh tien tam giac
void Triangle::movingTriangle() {
	int a, b;
	cout << endl << "Nhap vecto tinh tien v:" << endl;
	cin >> a;
	cin >> b;
	cout << "Tam giac duoc tinh tien theo vecto v: ";
	cout << "A'(" << m_nXAngleA + a << ", " << m_nYAngleA + b << "), ";
	cout << "B'(" << m_nXAngleB + a << ", " << m_nYAngleB + b << "), ";
	cout << "C'(" << m_nXAngleC + a << ", " << m_nYAngleC + b << "), " << endl;
}

//Lay do dai canh thu nhat
float Triangle::getEdgeAB() {

	return sqrt(pow(m_nXAngleA - m_nXAngleB, 2) + pow(m_nYAngleA - m_nYAngleB, 2));
}

//Lay do dai canh thu nhai
float Triangle::getEdgeBC() {

	return sqrt(pow(m_nXAngleB - m_nXAngleC, 2) + pow(m_nYAngleB - m_nYAngleC, 2));
}

//Lay do dai canh thu ba
float Triangle::getEdgeCA() {

	return sqrt(pow(m_nXAngleC - m_nXAngleA, 2) + pow(m_nYAngleC - m_nYAngleA, 2));
}

//Kiem tra co thuc su la tam giac hay khong
bool Triangle::checkingTriangle() {
	if (Triangle::getEdgeAB() - Triangle::getEdgeBC() < Triangle::getEdgeCA() < Triangle::getEdgeAB() + Triangle::getEdgeBC()) {

		return true;
	}
	else {

		return false;
	}
}

//Quay tam giac
void Triangle::spinningTriangle() {
	int m, n;
	cout << "Nhap tam quay M: " << endl;
	cin >> m;
	cin >> n;
}

//Phong to, thu nho tam giac
void Triangle::zoomingTriangle() {
	int m, n;
	cout << "Nhap tam phong to hoac thu nho tam giac M: " << endl;
	cin >> m;
	cin >> n;
}