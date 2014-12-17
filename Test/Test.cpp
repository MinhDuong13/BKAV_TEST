#include <iostream>

using namespace std;

class Enter {
public:
	Enter() {
		cout << "Entering the Hello program saying...\n";
	}
	~Enter() {
		cout << "Then exiting...\n";
	}
};

Enter enter;

int main() {
	cout << "Hello, world.\n";
}
