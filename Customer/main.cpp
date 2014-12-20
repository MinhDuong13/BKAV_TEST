#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int getPayTypeA(int a, int b, int c = 0) {

	return 1.1 * a * b;
}

int getPayTypeB(int a, int b, int c = 0) {
	int d = (c < 5) ? c : 5;
	return 1.1 * a * b * d;
}

int getPayTypeC(int a, int b, int c = 0) {

	return 1.1 * a * b * 0.5;
}

int getPay(int a, int b, int c, int(*functocal)(int, int, int)) {
	int g;
	g = (*functocal) (a, b, c);

	return g;
}

int main() {
	int S = 0;
	fstream inpFile("XYZ.INP", ios::in | ios::out);
	fstream outFile("XYZ.OUT", ios::in | ios::out);
	char input[100];

	int x;
	inpFile.getline(input, 100, '{');
	inpFile.getline(input, 100, '}');
	string x1(input);
	x = atoi(x1.c_str());
	outFile << x << "\t";

	int y;
	inpFile.getline(input, 100, '{');
	inpFile.getline(input, 100, '}');
	string y1(input);
	y = atoi(y1.c_str());
	outFile << y << "\t";

	int z;
	inpFile.getline(input, 100, '{');
	inpFile.getline(input, 100, '}');
	string z1(input);
	z = atoi(z1.c_str());
	outFile << z << endl;

	for (int i = 0; i < x; i++) {
		inpFile.getline(input, 100, '[');
		inpFile.getline(input, 100, ']');
		outFile << input << endl;
		inpFile.getline(input, 100, '{');
		inpFile.getline(input, 100, '}');
		int n;
		string n1(input);
		n = atoi(n1.c_str());
		inpFile.getline(input, 100, '{');
		inpFile.getline(input, 100, '}');
		int p;
		string p1(input);
		p = atoi(p1.c_str());
		S += getPay(n, p, 0, getPayTypeA);
		outFile << getPay(n, p, 0, getPayTypeA) << endl;
	}

	for (int i = 0; i < y; i++) {
		inpFile.getline(input, 100, '[');
		inpFile.getline(input, 100, ']');
		outFile << input << endl;
		inpFile.getline(input, 100, '{');
		inpFile.getline(input, 100, '}');
		int n;
		string n1(input);
		n = atoi(n1.c_str());
		inpFile.getline(input, 100, '{');
		inpFile.getline(input, 100, '}');
		int p;
		string p1(input);
		p = atoi(p1.c_str());
		inpFile.getline(input, 100, '\\');
		inpFile.getline(input, 100, '/');
		int year;
		string year1(input);
		year = atoi(year1.c_str());
		S += getPay(n, p, y, getPayTypeB);
		outFile << getPay(n, p, y, getPayTypeB) << endl;
	}
	for (int i = 0; i < z; i++) {
		inpFile.getline(input, 100, '[');
		inpFile.getline(input, 100, ']');
		outFile << input << endl;
		inpFile.getline(input, 100, '{');
		inpFile.getline(input, 100, '}');
		int n;
		string n1(input);
		n = atoi(n1.c_str());
		inpFile.getline(input, 100, '{');
		inpFile.getline(input, 100, '}');
		int p;
		string p1(input);
		p = atoi(p1.c_str());
		S += getPay(n, p, 0, getPayTypeC);
		outFile << getPay(n, p, 0, getPayTypeC) << endl;
	}
	outFile << endl << S;
	inpFile.close();
	outFile.close();
}