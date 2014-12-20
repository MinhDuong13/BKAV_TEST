#include "Function.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

Function::Function(int a, int b, int c, int d, int e, int f) {
	fstream inpFile("KHAOSAT.INP");
	char input[100];

	inpFile.getline(input, 100, ' ');
	string k1(input);
	a = atoi(k1.c_str());
	m_nK1 = a;

	inpFile.getline(input, 100, ' ');
	string k2(input);
	b = atoi(k2.c_str());
	m_nK2 = b;

	inpFile.getline(input, 100, ' ');
	string k3(input);
	c = atoi(k3.c_str());
	m_nK3 = c;

	inpFile.getline(input, 100, ' ');
	string min(input);
	d = atoi(min.c_str());
	m_nMin = d;

	inpFile.getline(input, 100, ' ');
	string max(input);
	e = atoi(max.c_str());
	m_nMax = e;

	inpFile.getline(input, 100, ' ');
	string step(input);
	f = atoi(step.c_str());
	m_nStep = f;
}

int Function::getK1() {

	return m_nK1;
}

int Function::getK2() {

	return m_nK2;
}

int Function::getK3() {

	return m_nK3;
}

int Function::getMax() {

	return m_nMax;
}

int Function::getMin() {

	return m_nMin;
}

int Function::getStep() {

	return m_nStep;
}

int Function::getFunctionFx(int x) {

	return (m_nK1 * x - 3);
}

int Function::getFunctionGx(int x) {

	return (-3 * x * x + m_nK2 * x);
}

int Function::getFunctionHx(int x) {

	return (7 * x * x * x + m_nK3 * x * x - 5);
}

int Function::getDerivativeFx(int x) {

	return (m_nK1);
}

int Function::getDerivativeGx(int x) {

	return (-3 * 2 * x+ m_nK2);
}

int Function::getDerivativeHx(int x) {

	return (7 * 3 * x * x + m_nK3 * 2 * x);
}

Function::~Function()
{
}
