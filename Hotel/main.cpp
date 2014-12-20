#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int getPayTypeDeluxe(int a, int b, int c) {

	return (a * 750000 + b) * (1 + c);
}

int getPayTypePremium(int a, int b, int c = 0) {
	
	return (a * 500000 + b) * 1.05;
}

int getPayTypeBusiness(int a, int b = 0, int c = 0) {

	return a * 300000;
}

int getPay(int a, int b, int c, int(*functocal)(int, int, int)) {
	int g;
	g = (*functocal) (a, b, c);

	return g;
}

int main() {
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

	S1 = 0; //Doanh thu phong Deluxe
	for (int i = 0; i < x; i++) {
		inpFile.getline(input, 100, '[');
		inpFile.getline(input, 100, ']');
		int nights;
		string nights1(input);
		nights = atoi(night1.c_str());

		inpFile.getline(input, 100, '{');
		inpFile.getline(input, 100, '}');
		int service;
		string servise1(input);
		servise = atoi(servise1.c_str());

		inpFile.getline(input, 100, '<');
		inpFile.getline(input, 100, '>');
		int attend;
		string attend1(input);
		attend = atoi(attend1.c_str());

		S1 += getPay(nights, service, attend, getPayTypeDeluxe);
		outFile << "Tong Doanh Thu Loai Phong Deluxe: " << getPay(nights, service, attend, getPayTypeDeluxe) << endl;
	}

	S2 = 0; //Doanh thu phong Premium
	for (int i = 0; i < y; i++) {
		inpFile.getline(input, 100, '[');
		inpFile.getline(input, 100, ']');
		int nights;
		string nights1(input);
		nights = atoi(night1.c_str());

		inpFile.getline(input, 100, '{');
		inpFile.getline(input, 100, '}');
		int service;
		string servise1(input);
		servise = atoi(servise1.c_str());

		S1 += getPay(nights, service, 0, getPayTypePremium);
		outFile << "Tong Doanh Thu Loai Phong Premium: " << getPay(nights, service, 0, getPayTypePremium) << endl;
	}

	int S3 = 0; //Doanh thi phong Business
	for (int i = 0; i < z; i++) {
		inpFile.getline(input, 100, '[');
		inpFile.getline(input, 100, ']');
		int nights;
		string nights1(input);
		nights = atoi(night1.c_str());

		S1 += getPay(nights, 0, 0, getPayTypeBusiness);
		outFile << "Tong Doanh Thu Loai Phong Business: " << getPay(nights, 0, 0, getPayTypeBusiness) << endl;
	}
	inpFile.close();
	outFile.close();
}