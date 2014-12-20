class Function {
	int m_nK1;
	int m_nK2;
	int m_nK3;
	int m_nMax;
	int m_nMin;
	int m_nStep;
public:
	Function(int, int, int, int, int, int);
	int getK1();
	int getK2();
	int getK3();
	int getMin();
	int getMax();
	int getStep();
	int getFunctionFx(int);
	int getFunctionGx(int);
	int getFunctionHx(int);
	int getDerivativeFx(int);
	int getDerivativeGx(int);
	int getDerivativeHx(int);
	int getFunction(int, int*);
	~Function();
};

