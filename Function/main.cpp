#include "Function.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main() {
	Function F(0, 0, 0, 0, 0, 0);
	fstream inpFile("KHAOSAT.INP");
	fstream outFile("KHAOSAT.OUT");
	for (int i = F.getMin(); i <= F.getMax(); i += F.getStep()) {
		outFile << i << " ";
	}
	outFile << endl;

	for (int i = F.getMin(); i <= F.getMax(); i += F.getStep()) {
		outFile << F.getFunctionFx(i) << " ";
	}
	outFile << endl;

	for (int i = F.getMin(); i <= F.getMax(); i += F.getStep()) {
		outFile << F.getFunctionGx(i) << " ";
	}
	outFile << endl;

	for (int i = F.getMin(); i <= F.getMax(); i += F.getStep()) {
		outFile << F.getFunctionHx(i) << " ";
	}
	outFile << endl;

	for (int i = F.getMin(); i <= F.getMax(); i += F.getStep()) {
		outFile << F.getDerivativeFx(i) << " ";
	}
	outFile << endl;

	for (int i = F.getMin(); i <= F.getMax(); i += F.getStep()) {
		outFile << F.getDerivativeGx(i) << " ";
	}
	outFile << endl;

	for (int i = F.getMin(); i <= F.getMax(); i += F.getStep()) {
		outFile << F.getDerivativeHx(i) << " ";
	}
	outFile << endl;
	outFile.close();
	inpFile.close();
}