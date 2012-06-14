// 10001st prime number

#include <iostream>

using namespace std;

int main() {
  int prime[10001];
  prime[0] = 2;
  int primes = 1;

  // for each number
  for (int i = 3; primes < 10002; i+=2) {
    bool flag = true;
    
    // for each prime in the array
    for (int j = 0; j < primes; j++)
      
      // if the number is divisible by a prime break
      if (i%prime[j]==0) {
	flag = false;
	break;
      }

    // if prime add to the array
    if (flag)
      prime[primes++] = i;
  }
  
  cout << prime[10000] << endl;
  
  return 0;
}
