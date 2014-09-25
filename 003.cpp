// largest prime factor of 600851475143

#include <iostream>

using std::cout;
using std::endl;

int main() {
	unsigned long number = 600851475143;

	for (unsigned long i = 2; i *i < number; ++i) {
		while (number % i == 0) {
			number /= i;
		}
	}

	cout << number << endl;
	return 0;
}
