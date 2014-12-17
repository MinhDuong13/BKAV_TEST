#include "ElipAndCircle.h"

//Nhap vao truc lon va truc be cua elip
ElipAndCircle::ElipAndCircle(int a, int b) {
	cout << "Nhap do dai truc lon: a = ";
	cin >> a;
	m_nBigAxis = a;
	cout << "Nhap do dai truc be: b = ";
	cin >> b;
	m_nSmallAxis = b;
}

//Lay do dai truc lon
int ElipAndCircle::getBigAxis() {

	return m_nBigAxis;
}

//Lay do dai truc be
int ElipAndCircle::getSmallAxis() {

	return m_nSmallAxis;
}

ElipAndCircle::~ElipAndCircle()
{
}
