// difference between sum of squares of first one hundred natural numbers
// and square of sum

#include <iostream>

using std::cout;
using std::endl;

unsigned sum_squares(const unsigned limit) {
	unsigned sum = 0;
	for (unsigned i = 0; i <= limit; ++i) {
		sum += i * i;
	}
	return sum;
}

unsigned square_sum(const unsigned limit) {
	unsigned sum = 0;
	for (unsigned i = 0; i <= limit; ++i) {
		sum += i;
	}
	return sum * sum;
}

int main() {
	const unsigned limit {100};
	cout << square_sum(limit) - sum_squares(limit) << endl;

  return 0;
}
  
