//----------------------
//Name: Time
//Description: The Clock 
//----------------------
class Time {
	int m_nHour; //Gio
	int m_nMinute; //Phut
	int m_nSecond; //Giay
public:
	Time(int, int, int);
	int runningHour();
	int runningMinute();
	int runningSecond();
};