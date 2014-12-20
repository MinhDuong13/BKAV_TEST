class Triangle {
	int m_nXAngleA, m_nYAngleA;
	int m_nXAngleB, m_nYAngleB;
	int m_nXAngleC, m_nYAngleC;
public:
	Triangle(int, int, int, int, int, int);
	int getXAngleA(void);
	int getYAngleA(void);
	int getXAngleB(void);
	int getYAngleB(void);
	int getXAngleC(void);
	int getYAngleC(void);
	int getXMax();
	int getYMax();
	int getXMin();
	int getYMin();
	~Triangle();
};