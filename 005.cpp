// smallest positive number evenly divisible by all the numbers from 1 to 20

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using std::vector;
using std::sqrt;
using std::max;
using std::max_element;
using std::cout;
using std::endl;

vector<unsigned> primes_up_to(const unsigned limit) {
	if (limit < 2) {
		return {};
	}

	vector<unsigned> primes {2};

	for (unsigned trial = primes.front() + 1; trial <= limit; ++trial) {
		bool is_prime = true;
		for (const auto &prime : primes) {
			if (trial % prime == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime) {
			primes.push_back(trial);
		}
	}

	return primes;
}

// Prime number factorization
// Return 0 and 1 for 0 and 1 respectively
vector<unsigned> factorize(unsigned n) {
	if (n < 2) {
		return {n};
	}

	auto primes_ = primes_up_to(n);
	vector<unsigned> factors;

	for (const auto prime : primes_) {
		while (n % prime == 0) {
			factors.push_back(prime);
			n /= prime;
		}
		if (n == 1) {
			break;
		}
	}

	return factors;
}

// Transform an array of numbers into an array of frequencies
// {2, 2, 3} -> {0, 0, 2, 1}
vector<unsigned> frequency_transform(const vector<unsigned> &values) {
	const auto max_value = *max_element(values.begin(), values.end());
	// Account for zero
	vector<unsigned> frequencies(max_value + 1);
	for (const auto &value : values) {
		++frequencies[value];
	}
	return frequencies;
}

int main() {

	const unsigned limit {20};
	vector<unsigned> frequencies_max(limit);

	for (unsigned i = 0; i < limit; ++i) {
		auto frequencies = frequency_transform(factorize(i));
		for (vector<unsigned>::size_type j = 0; j < frequencies.size(); ++j) {
			frequencies_max[j] = max(frequencies_max[j], frequencies[j]);	
		}
	}

	unsigned long smallest = 1;
	for (unsigned i = 1; i < limit; ++i) {
		for (unsigned power = 0; power < frequencies_max[i]; ++power) {
			smallest *= i;
		}
	}

	cout << smallest << endl;

	return 0;
}
