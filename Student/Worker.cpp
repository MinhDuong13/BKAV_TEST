#include "Worker.h"
#include <iostream>

using namespace tsd;

Worker::Worker(string n, int d, int m, int y) {
	m_sName = n;
	m_nDateOfBirth = d;
	m_nMonthOfBirth = m;
	m_nYearOfBirth = y;
}

//Lay ten nhan vien
string Worker::getName() {

	return m_sName;
}

//Lay ngay sinh
int Worker::getDateOfBirth() {

	return m_nDateOfBirth;
}

//Lay thang sinh
int Worker::getMonthOfBirth() {

	return m_nMonthOfBirth;
}

//Lay nam sinh
int Worker::getYearOfBirth() {

	return m_nYearOfBirth;
}

//Tinh tien luong cua nhan vien san xuat
int getSalary1(int p) {

	return 1000000 + 5000 * p;
}

//Tinh tien luong cua nhan vien van phong
int getSalary2(int q) {

	return 100000 * q;
}

//Tinh tien luong cua nhan vien
int Worker::getSalary(int m, int(*functocal) (int)) {
	m_nSalary = (*functocal)(m);

	return m_nSalary;
}

Worker::~Worker()
{
}