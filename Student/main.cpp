#include <iostream>
#include "Humans.h"
#include "Worker.h"

using namespace std;

int main() {
	College man1("John", 20);
	cout << "This is" << man1.getAge() << ", " << man1.getAge() << " age." << "He say: " << endl;
	man1.study();
}