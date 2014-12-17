#include <iostream>
#include "Sequence.h"

using namespace std;

//Nhap day so
Sequence::Sequence() {
	cout << "Nhap vao day so:" << endl;
	m_nLength = 0;
	char n = 'y';
	while (n == 'y') {
		cin >> m_nNumber;
		m_nLength++;
		cin >> n;
	}
}

//Sap xep day so theo thu tu tang dan
void Sequence::increase() {
	for (int i = 0; i < m_nLength; i++) {
		for (int j = 0; j < m_nLength - 1; j++) {
			if (m_nNumber[j] > m_nNumber[j + 1]) {
				int t = m_nNumber[j];
				m_nNumber[j] = m_nNumber[j + 1];
				m_nNumber[j + 1] = t;
			}
		}
	}
	cout << endl << "Sap xep theo thu tu tang dan: ";
	for (int i = 0; i < m_nLength; i++) {
		cout << m_nNumber[i] << ", ";
	}
}

//Sap xep day so theo thu tu giam dan cua tri tuyet doi
void Sequence::decrease() {
	for (int i = 0; i < m_nLength; i++) {
		for (int j = 0; j < m_nLength - 1; j++) {
			if (fabs(m_nNumber[j]) < fabs(m_nNumber[j + 1])) {
				int t = m_nNumber[j];
				m_nNumber[j] = m_nNumber[j + 1];
				m_nNumber[j + 1] = t;
			}
		}
	}
	cout << endl << "Sap xep theo thu tu tri tuyet doi giam dan: ";
	for (int i = 0; i < m_nLength; i++) {
		cout << m_nNumber[i] << ", ";
	}
}