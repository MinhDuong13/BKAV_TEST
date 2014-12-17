#include <iostream>
#include "Farm.h"

using namespace std;

int main() {
	Cow cow(0, 0);
	cout << "So luong bo: " << cow.getNumberOfCow() << endl;
	cout << "Luong sua bo: " << cow.getMilkOfCow() << endl;

	Goat goat(0, 0);
	cout << "So luong de: " << goat.getNumberOfGoat() << endl;
	cout << "Luong sua de: " << goat.getMilkOfGoat() << endl;

	Lamp lamp(0, 0);
	cout << "So luong cuu: " << lamp.getNumberOfLamp() << endl;
	cout << "Luong sua bo: " << lamp.getMilkOfLamp() << endl;

	cow.getVoiceOfCow();
	goat.getVoiceOfGoat();
	lamp.getVoiceOfLamp();

}