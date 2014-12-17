#include <iostream>
#include "Farm.h"
#include <cstdlib>

using namespace std;

Farm::Farm()
{
}

Cow::Cow(int n, int m) {
	cout << "Nhap vao so bo cua nong trai: ";
	cin >> n;
	cout << "Nhap vao luong sua bo: ";
	cin >> m;
	m_nNuberOfCow = n;
	m_nMilkOfCow = m;
}

int Cow::getNumberOfCow() {
	m_nNuberOfCow += rand() % 2;

	return m_nNuberOfCow;
}

int Cow::getMilkOfCow() {
	m_nMilkOfCow += m_nNuberOfCow * (rand() % 20);

	return m_nMilkOfCow;
}

void Cow::getVoiceOfCow() {
	cout << "Feed the Cow!" << endl;
}

Lamp::Lamp(int n, int m) {
	cout << "Nhap vao so cuu cua nong trai: ";
	cin >> n;
	cout << "Nhap vao luong sua cuu: ";
	cin >> m;
	m_nNuberOfLamp = n;
	m_nMilkOfLamp = m;
}

int Lamp::getNumberOfLamp() {
	m_nNuberOfLamp += rand() % 2;

	return m_nNuberOfLamp;
}

int Lamp::getMilkOfLamp() {
	m_nMilkOfLamp += m_nNuberOfLamp * (rand() % 5);

	return m_nMilkOfLamp;
}

void Lamp::getVoiceOfLamp() {
	cout << "Feed the Lamp!" << endl;
}

Goat::Goat(int n, int m) {
	cout << "Nhap vao so de cua nong trai: ";
	cin >> n;
	cout << "Nhap vao luong sua de: ";
	cin >> m;
	m_nNuberOfGoat = n;
	m_nMilkOfGoat = m;
}

int Goat::getNumberOfGoat() {
	m_nNuberOfGoat += rand() % 2;

	return m_nNuberOfGoat;
}

int Goat::getMilkOfGoat() {
	m_nMilkOfGoat += m_nNuberOfGoat * (rand() % 10);

	return m_nMilkOfGoat;
}

void Goat::getVoiceOfGoat() {
	cout << "Feed the Goat!" << endl;
}

Farm::~Farm()
{
}
