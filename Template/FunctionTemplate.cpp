#include <iostream>

using namespace std;

template <class T>

T maxBetween(T a, T b) {

	return (a > b) ? a : b;
}

template <class T>

T maxInLine(T A[5]) {
	T max = A[0];
	for (int i = 1; i < 5; i++) {
		max = (max > A[1]) ? max : A[i];
	}

	return max;
}

template <class T>

void sequence(T A[5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (A[i] > A[i + 1]) {
				T m = A[i];
				A[i] = A[i + 1];
				A[i + 1] = m;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << A[i];
	}
}

int main() {
	cout << maxBetween(150, 12);
}