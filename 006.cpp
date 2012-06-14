// difference between sum of squares of first one hundred natural numbers and square of sum

#include <iostream>

using namespace std;

int main() {
  
  int sum = 0;
  int square = 0;
  for (int i = 1; i < 101; i++) {
    sum += i;
    square += i*i;
  }

  cout << sum*sum - square << endl;

  return 0;
}
  
