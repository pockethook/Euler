// sum even fibonnaci numbers below four million

#include <iostream>

using namespace std;

const int MAX = 4000000;

int main() {
  
  int last = 1;
  
  int fib = 1;
  int sum = 0;

  while (fib < MAX) {
    int temp = fib;
    fib += last;
    last = temp;
    
    if (fib < 4000000 && fib%2==0)
      sum += fib;
  }

  cout << sum << endl;

  return 0;

}
