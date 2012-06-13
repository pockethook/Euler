#include <iostream>

using namespace std;

int main() {
  long number = 600851475143;

  for (int i = 2; i*i<number; i++) {
    if (number%i==0)
      number/=i--;
  }
    
  cout << number << endl;
  return 0;
}
