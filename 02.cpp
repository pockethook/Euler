#include <iostream>

using namespace std;

int main() {
  
  int last = 1;
  
  int fib = 1;
  int sum = 0;

  while (fib < 4000000) {
    int temp = fib;
    fib += last;
    last = temp;
    
    if (fib < 4000000 && fib%2==0)
      sum += fib;
  }

  cout << sum << endl;

  return 0;

}
