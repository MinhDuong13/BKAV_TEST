#include "TimeSpan.h"
#include <iostream>

using namespace std;

//Nhap moc thoi gian
TimeSpan::TimeSpan(int h, int m, int s) {
	m_nHour = h;
	m_nMinute = m;
	m_nSecond = s;
}

//Tang them mot khoang thoi gian
void TimeSpan::increaseTime() {
	int h, m, s;
	cout << "Nhap khoang thoi gian tang them: " << endl;
	cout << "Hour = ";
	cin >> h;
	cout << "Minute = ";
	cin >> m;
	cout << "Second = ";
	cin >> s;
	if (m_nSecond + s >= 60) {
		m_nSecond -= 60;
		m_nMinute++;
	}
	if (m_nMinute + m >= 60) {
		m_nMinute -= 60;
		m_nHour++;
	}
	cout << "Thoi gian sau khi tang them la: " << m_nHour + h << " : " << m_nMinute + m << " : " << m_nSecond + s << endl;
}

//Giam di mot khoang thoi gian
void TimeSpan::decreaseTime() {
	int h, m, s;
	cout << "Nhap khoang thoi gian giam di: " << endl;
	cout << "Hour = ";
	cin >> h;
	cout << "Minute = ";
	cin >> m;
	cout << "Second = ";
	cin >> s;
	if (m_nSecond - s < 0) {
		m_nSecond += 60;
		m_nMinute--;
	}
	if (m_nMinute - m < 0) {
		m_nMinute += 60;
		m_nHour--;
	}
	cout << "Thoi gian sau khi tang them la: " << m_nHour - h << " : " << m_nMinute - m << " : " << m_nSecond - s << endl;
}

TimeSpan::~TimeSpan()
{
}
