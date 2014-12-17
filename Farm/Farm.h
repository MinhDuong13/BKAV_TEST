//---
//Name: Farm
//Description: Number of animals, voice of animal, milk of animals
//---
class Farm {
public:
	Farm();
	~Farm();
};

class Cow :public Farm {
	int m_nNuberOfCow;
	int m_nMilkOfCow;
public:
	Cow(int, int);
	int getNumberOfCow();
	int getMilkOfCow();
	void getVoiceOfCow();
};

class Lamp :public Farm {
	int m_nNuberOfLamp;
	int m_nMilkOfLamp;
public:
	Lamp(int, int);
	int getNumberOfLamp();
	int getMilkOfLamp();
	void getVoiceOfLamp();
};

class Goat :public Farm {
	int m_nNuberOfGoat;
	int m_nMilkOfGoat;
public:
	Goat(int, int);
	int getNumberOfGoat();
	int getMilkOfGoat();
	void getVoiceOfGoat();
};