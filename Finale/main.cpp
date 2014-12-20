#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
	Triangle ABC(0, 0, 0, 0, 0, 0);
	Circle O(0, 0, 0);
	Rectangle ABCD(0, 0, 0, 0);
	fstream outFile("OUTPUT.DAT", ios::in|ios::out);
	int Xmax, Xmin, Ymax, Ymin;
	int Xmax1 = (ABCD.getXMax() > O.getXMax()) ? ABCD.getXMax() : O.getXMax();
	Xmax = (Xmax1 > ABC.getXMax()) ? Xmax1 : ABC.getXMax();

	int Xmin1 = (ABCD.getXMin() < O.getXMin()) ? ABCD.getXMin() : O.getXMin();
	Xmin = (Xmin1 < ABC.getXMin()) ? Xmin1 : ABC.getXMin();

	int Ymax1 = (ABCD.getYMax() > O.getYMax()) ? ABCD.getYMax() : O.getYMax();
	Ymax = (Ymax1 > ABC.getYMax()) ? Ymax1 : ABC.getYMax();

	int Ymin1 = (ABCD.getYMin() < O.getYMin()) ? ABCD.getYMin() : O.getYMin();
	Ymin = (Ymin1 < ABC.getYMin()) ? Ymin1 : ABC.getYMin();

	outFile << "C\t" << Xmin << "\t" << Ymax << "\t" << Xmax - Xmin << "\t" << Ymax - Ymin;
	system("pause");
	outFile.close();
}