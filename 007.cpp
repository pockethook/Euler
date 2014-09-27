// 10001st prime number

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool is_prime(const unsigned trial, const vector<unsigned> &primes) {
	for (const auto prime : primes) {
		if (trial % prime == 0) {
			return false;
		}
	}
	return true;
}

unsigned nth_prime(const unsigned n) {
	vector<unsigned> primes {2};
	for (unsigned trial = 3; primes.size() != n; trial += 2) {
		if (is_prime(trial, primes)) {
			primes.push_back(trial);
		}
	}
	return primes.back();
}

int main() {
	const unsigned n {10001};
	cout << nth_prime(n) << endl;

	return 0;
}

