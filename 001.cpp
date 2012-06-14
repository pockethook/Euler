// sum multiples of 3 or 5 below 1000

#include <iostream>

using namespace std;

const int MAX = 1000;

int main() {

  int sum = 0;

  for (int i = 0; i < MAX; i++) {
    if (i%3==0 || i%5==0)
      sum += i;
  }

  cout << sum << endl;

  return 0;

}
