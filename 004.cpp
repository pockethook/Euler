// largest palindrome made from the product of two 3-digit numbers

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::string;
using std::to_string;
using std::cout;
using std::endl;

bool is_palindrone(const string &str) {
	for (string::size_type i = 0; i < str.size() / 2; ++i) {
		if (str[i] != str[str.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main() {

	unsigned largest = 101 * 101;
	for (unsigned i = 102; i < 1000; ++i) {
		for (unsigned j = 102; j < 1000; ++j) {
			unsigned trial = i * j;
			if (trial > largest && is_palindrone(to_string(trial))) {
				largest = trial;
			}
		}
	}
	cout << largest << endl;

  return 0;
}
