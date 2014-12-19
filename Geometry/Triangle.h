//----------------------------
//Name: Triangle.
//Description: Get length of edges, move
//----------------------------
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
	float getEdgeAB(void);
	float getEdgeBC(void);
	float getEdgeCA(void);
	bool checkingTriangle(void);
	void movingTriangle(void);
	void spinningTriangle(void);
	void zoomingTriangle(void);
};
