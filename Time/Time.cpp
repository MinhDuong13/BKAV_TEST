#include "Time.h"

//Nhap moc thoi gian
Time::Time(int h, int m, int s)	{
	m_nHour = h;
	m_nMinute = m;
	m_nSecond = s;
}

//Chay kim giay cua dong ho
int Time::runningSecond() {
	if (m_nSecond < 59){
		m_nSecond++;
	}
	else {
		m_nSecond = 0;
	}

	return m_nSecond;
}

//Chay kim phut cua dong ho
int Time::runningMinute() {
	if (m_nSecond == 0){
		m_nMinute++;
	}
	if (m_nMinute == 60){
		m_nMinute = 0;
	}

	return m_nMinute;
}

//Chay kim gio cua dong ho
int Time::runningHour() {
	if (m_nSecond == 0 && m_nMinute == 0){
		m_nHour++;
	}
	if (m_nHour == 12){
		m_nHour = 0;
	}

	return m_nHour;
}