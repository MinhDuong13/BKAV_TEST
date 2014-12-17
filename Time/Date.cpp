#include "Date.h"

//Nhap moc thoi gian
Date::Date(int d, int m, int y) {
	m_nDay = d;
	m_nMonth = m;
	m_nYear = y;
}

//Chay ngay
int Date::runningDay() {
	switch (m_nMonth) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (m_nDay < 31) {
			m_nDay++;
		}
		else {
			m_nDay = 1;
		}
	case 2:
		if (m_nYear % 4 == 0) {
			if (m_nDay < 29) {
				m_nDay++;
			}
			else {
				m_nDay = 1;
			}
		}
		else {
			if (m_nDay < 28) {
				m_nDay++;
			}
			else {
				m_nDay = 1;
			}
		}
	case 4: case 6: case 9: case 11:
		if (m_nDay < 30) {
			m_nDay++;
		}
		else {
			m_nDay = 1;
		}
	default:
		break;
	}

	return m_nDay;
}

//Chay thang
int Date::runningMonth() {
	if (m_nDay == 1) {
		m_nMonth++;
	}
	if (m_nMonth == 13) {
		m_nMonth = 1;
	}

	return m_nMonth;
}

//Chay nam
int Date::runningYear() {
	if (m_nDay == 1 && m_nMonth == 1) {
		m_nYear++;
	}

	return m_nYear;
}