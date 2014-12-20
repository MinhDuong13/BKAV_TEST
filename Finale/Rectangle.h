class Rectangle {
	int m_nXAngle;
	int m_nYAngle;
	int m_nLength;
	int m_nWidth;
public:
	Rectangle(int, int, int, int);
	int getXAngle();
	int getYAngle();
	int getLength();
	int getWidth();
	int getXMax();
	int getYMax();
	int getXMin();
	int getYMin();
	~Rectangle();
};

