#include <iostream>
#include <math.h>
#include "Sequence.h"

using namespace std;

//Nhap day so
Sequence::Sequence(int * n, int l) {
	m_nNumber = new int;
	m_nLength = 0;
	char x = 'y';
	cout << "nhap vao: " << endl;
	while (x == 'y') {
		int AddMember;
		cin >> AddMember;
		cout << "nhap tiep? y/n?";
		cin >> x;
		*m_nNumber = AddMember;
		m_nNumber++;
		m_nLength++;
	}
	cout << endl << "Day nhap vao: ";
	for (int i = m_nLength; i > 0; i--) {
		cout << *(m_nNumber - i) << ", ";
	}
}

//Sap xep day so theo thu tu tang dan
void Sequence::increase() {
	for (int i = 0; i < m_nLength; i++) {
		for (int j = m_nLength; j > 1; j--) {
			if (*(m_nNumber - j) > *(m_nNumber - j + 1)) {
				int a = *(m_nNumber - j);
				*(m_nNumber - j) = *(m_nNumber - j + 1);
				*(m_nNumber - j + 1) = a;
			}
		}
	}
	cout << endl << "Sap xep theo thu tu tang dan: ";
	for (int i = m_nLength; i > 0; i--) {
		cout << *(m_nNumber - i) << ", ";
	}
}

//Sap xep day so theo thu tu giam dan tri tuyet doi
void Sequence::decrease() {
	for (int i = 0; i < m_nLength; i++) {
		for (int j = m_nLength; j > 1; j--) {
			if (fabs(*(m_nNumber - j)) < fabs(*(m_nNumber - j + 1))) {
				int a = *(m_nNumber - j);
				*(m_nNumber - j) = *(m_nNumber - j + 1);
				*(m_nNumber - j + 1) = a;
			}
		}
	}
	cout << endl << "Sap xep theo thu tu giam dan tri tuyet doi: ";
	for (int i = m_nLength; i > 0; i--) {
		cout << *(m_nNumber - i) << ", ";
	}
}

//Sap xep so chan tang dan, so le giam dan
void Sequence::InDecrease() {
	for (int i = 0; i < m_nLength; i++) {
		for (int j = m_nLength; j > 1; j--) {
			if (*(m_nNumber - j) % 2 == 0 && *(m_nNumber - j + 1) % 2 == 0 || *(m_nNumber - j) % 2 != 0 && *(m_nNumber - j + 1) % 2 != 0) {
				if (*(m_nNumber - j) > *(m_nNumber - j + 1)) {
					int a = *(m_nNumber - j);
					*(m_nNumber - j) = *(m_nNumber - j + 1);
					*(m_nNumber - j + 1) = a;
				}
			}
			else {
				if (*(m_nNumber - j) % 2 != 0 && *(m_nNumber - j + 1) % 2 == 0) {
					int a = *(m_nNumber - j);
					*(m_nNumber - j) = *(m_nNumber - j + 1);
					*(m_nNumber - j + 1) = a;
				}
			}
		}
	}
	cout << endl << "Sap xep so chan tang dan, so le giam dan: ";
	for (int i = m_nLength; i > 0; i--) {
		cout << *(m_nNumber - i) << ", ";
	}
}

//Sap xep so am giam dan, so duong tang dan
void Sequence::DeIncrease() {
	for (int i = 0; i < m_nLength; i++) {
		for (int j = m_nLength; j > 1; j--) {
			if (*(m_nNumber - j) > 0 && *(m_nNumber - j + 1) > 0) {
				if (*(m_nNumber - j) > *(m_nNumber - j + 1)) {
					int a = *(m_nNumber - j);
					*(m_nNumber - j) = *(m_nNumber - j + 1);
					*(m_nNumber - j + 1) = a;
				}
			}
			else {
				if (*(m_nNumber - j) > 0 && *(m_nNumber - j + 1) < 0) {
					int a = *(m_nNumber - j);
					*(m_nNumber - j) = *(m_nNumber - j + 1);
					*(m_nNumber - j + 1) = a;
				}
				else {
					if (*(m_nNumber - j) < 0 && *(m_nNumber - j + 1) < 0) {
						if (*(m_nNumber - j) < *(m_nNumber - j + 1)) {
							int a = *(m_nNumber - j);
							*(m_nNumber - j) = *(m_nNumber - j + 1);
							*(m_nNumber - j + 1) = a;
						}
					}
				}
			}
		}
	}
	cout << endl << "Sap xep so am giam dan, so duong tang dan: ";
	for (int i = m_nLength; i > 0; i--) {
		cout << *(m_nNumber - i) << ", ";
	}
}