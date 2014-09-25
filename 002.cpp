// sum even fibonnaci numbers below four million

#include <iostream>

using std::cout;
using std::endl;

class Fibonacci {
private:
	unsigned a_;
	unsigned b_;

public:
	Fibonacci(unsigned a, unsigned b) : a_(a), b_(b) {}
	unsigned operator()() {
		unsigned temp = a_ + b_;
		a_ = b_;
		b_ = temp;
		return b_;
	}
};

int main() {
  
	Fibonacci next_fibonacci(0, 1);

	unsigned sum = 0;
	const unsigned limit = 4000000;

	for (;;) {
		unsigned latest = next_fibonacci();
		if (latest > limit) {
			break;
		}
		if (latest % 2 == 0) {
			sum += latest;
		}
	}

  cout << sum << endl;

  return 0;

}
