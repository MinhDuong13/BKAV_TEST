class TimeSpan {
public:
	int m_nHour;
	int m_nMinute;
	int m_nSecond;
public:
	TimeSpan(int, int, int);
	void increaseTime(void);
	void decreaseTime(void);
	~TimeSpan();
};

