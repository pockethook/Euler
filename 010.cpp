#include <iostream>

using namespace std;

int main() {
  
  int prime[1000000];
  prime[0] = 2;
  int primes = 1;

  long sum = 2;

  // for each number below 2 million 
  for (int i = 3; i < 2000000; i++) {
    
    bool flag = true;
    
    // check if number divisible by a prime number
    for (int j = 0; j < primes; j++)
      if (i%prime[j]==0) {
	flag = false;
	break;
      }
    
    // if not divisible add to prime number list and sum
    if (flag) {
      prime[primes++] = i;
      sum += i;
    }

  }
  
  cout << sum << endl;

  return 0;
}
    
    
