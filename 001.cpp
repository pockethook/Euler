// Sum multiples of 3 or 5 below 1000

#include <iostream>

using namespace std;

const unsigned MAX = 1000;

int main() {

  unsigned sum = 0;

  for (unsigned i = 0; i < MAX; ++i) {
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  }

  cout << sum << endl;

  return 0;

}
