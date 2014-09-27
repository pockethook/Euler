// smallest positive number evenly divisible by all the numbers from 1 to 20

#include <iostream>

using std::cout;
using std::endl;

unsigned long factorial(const unsigned n) {
	unsigned long fact = 1;
	for (unsigned i = 1; i < n; ++i) {
		fact *= i;
	}
	return fact;
}

int main() {

	unsigned limit {20};
	unsigned long largest {factorial(limit)};

	long smallest {0};

	for (unsigned long trial = 2; trial <= largest; ++trial) {
		bool divisible {true};
		for (unsigned divisor = 2; divisor <= limit; ++divisor) {
			if (trial % divisor != 0) {
				divisible = false;
				break;
			}
		}

		if (divisible) {
			smallest = trial;
			break;
		}
	}

	cout << smallest << endl;

	return 0;
}
