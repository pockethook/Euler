#include <iostream>

using namespace std;

long int power(const int n) {
  long int prod = n;

  for (int i = 1; i < n; i++) {
    prod *= n;
    prod %= 10000000000;
  }

  return prod;
}

int main() {

  long int sum = 0;
  for (int i = 1; i <= 1000; i++) {
    sum += power(i);
    sum %= 10000000000;
  }

  cout << sum << endl;

  return 0;
}
