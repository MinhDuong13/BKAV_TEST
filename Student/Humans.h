class Humans {
protected:
	string m_sName;
	int m_nAge;
public:
	Humans(void);
	Humans(string, int);
	string getName(void);
	int getAge(void);
	~Humans();
};

class College :public Humans {
public:
	College(string, int);
	void study(void);
};

class Student :public Humans {
public:
	Student(string, int);
	void learn(void);
};

class Artist :public Humans {
public:
	Artist(string, int);
	void compose(void);
};

class Singer :public Humans {
public:
	Singer(string, int);
	void sing(void);
};