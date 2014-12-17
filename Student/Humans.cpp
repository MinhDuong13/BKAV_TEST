#include "Humans.h"
#include <iostream>

using namespace std;



College::College(string name, int age) {
	this->m_sName = name;
	this->m_nAge = age;
}

void College::study(void) {
	cout << "I study." << endl;
}

Student::Student(string name, int age) {
	this->m_sName = name;
	this->m_nAge = age;
}

void Student::learn(void) {
	cout << "I learn." << endl;
}

Artist::Artist(string name, int age) {
	this->m_sName = name;
	this->m_nAge = age;
}

void Artist::compose(void) {
	cout << "I compuse." << endl;
}

Singer::Singer(string name, int age) {
	this->m_sName = name;
	this->m_nAge = age;
}

void Singer::sing(void) {
	cout << "I sing." << endl;
}

Humans::Humans()
{
}

Humans::Humans(string s, int a) {
	m_sName = s;
	m_nAge = a;
}

string Humans::getName() {

	return m_sName;
}

int Humans::getAge() {

	return m_nAge;
}

Humans::~Humans()
{
}