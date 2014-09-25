// Sum multiples of 3 or 5 below 1000

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

unsigned sum_multiples_below(const vector<unsigned> multiples,
                             const unsigned limit) {
	unsigned sum = 0;
	for (unsigned i = 0; i < limit; ++i) {
		for (const auto &multiple : multiples) {
			if (i % multiple == 0) {
				sum += i;
				break;
			}
		}
	}

	return sum;
}

int main() {
	vector<unsigned> multiples {3, 5};
	unsigned limit = 1000;
	unsigned sum = sum_multiples_below(multiples, limit);
	cout << sum << endl;

	return 0;

}
