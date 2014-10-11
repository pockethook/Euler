// last ten digits in 1^1 + .. +1000^1000

#include <iostream>

using std::cout;
using std::endl;

unsigned long power_modulo(const unsigned base,
                           const unsigned exponent,
                           const unsigned long modulo) {

	unsigned long product {base};

	for (unsigned exp = 1; exp < exponent; ++exp) {
		product *= base;
		product %= modulo;
	}

	return product;
}

int main() {

	unsigned long sum {0};
	unsigned long modulo {10000000000};
	for (unsigned i = 1; i <= 1000; i++) {
		sum += power_modulo(i, i, modulo);
		sum %= modulo;
	}

	cout << sum << endl;

	return 0;
}

