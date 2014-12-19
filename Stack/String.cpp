#include <iostream>
#include "String.h"
using namespace std;

//Thiet lap chuoi
String::String() {
	m_nNext = new char;
	m_nNumberOfString = 0;
}

//Lay do dai chuoi
int String::getLengthOfString() {

	return m_nNumberOfString;
}

//Noi hai chuoi
void String::linkingStrings(String A, String B) {
	A.getString();
	B.getString();
}

//Nhap chuoi
void String::setString() {
	cout << "Nhap vao:" << endl;
	while (m_sMemberOfString != '.') {
		cin >> m_sMemberOfString;
		*m_nNext = m_sMemberOfString;
		m_nNumberOfString++;
		m_nNext++;
	}
}

//Xuat chuoi
void String::getString() {
	for (int i = m_nNumberOfString; i > 0; i--) {
		cout << *(m_nNext - i);
	}
}

//Dao chuoi
void String::swappingString() {
	for (int i = 0; i < m_nNumberOfString; i++) {
		cout << *(m_nNext - i - 1);
	}
}

//Huy chuoi
String::~String(){

}