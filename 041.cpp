// largest pandigital prime
// 987654321 and 87654321 digits sum to a multiple of 3

#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
 
  if (n%2==0)
    return (n==2);

  for (int i = 3; i*i <= n; i+=2)
    if (n%i==0)
      return false;

  return true;

}

bool is_pandigital(int n) {

  if (n == 1)
    return true;

  int tally = 0;
  int digits;

  // 000111110 for 5 digit pandigital
  for (digits = 0; n; digits++) {
    tally = tally | (1<<(n%10));
    n/=10;
  }

  // 000111110 + 2 == 001000000 == 1<<6
  if ((tally + 2) == (1 << (digits + 1)))
    return true;

  return false;

}

int main() {

  for (int i = 7654321; i > 0; i-=2)
    if (is_pandigital(i) && is_prime(i)) {
      cout << i << endl;
      break;
    }
  
      
  return 0;
}
