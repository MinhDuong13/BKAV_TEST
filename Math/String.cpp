#include <iostream>
#include "String.h"

using namespace std;


String::String(char * s, int n) {
	m_sChar = new int;
	char AddMember = 'a';
	cout << "Nhap chuoi: " << endl;
	while (AddMember != '.') {
		cin >> AddMember;
		* m_sChar = AddMember;
		m_nLength++;
	}
	cout << endl << "Chuoi nhap vao: ";
	for (int i = m_nLength; i > 0; i--) {
		cout << *(m_sChar - i);
	}
}


String::~String()
{
}
