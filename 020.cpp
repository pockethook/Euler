// sum of digits of 100!

#include <iostream>

using namespace std;

int factorial_sum(int n) {
 
  int array[1000] = {0};
  array[0] = 1;
  
  for (int m = 1; m <= n; m++) {
      
    int buffer[1000] = {0};
      for (int i = 0; i < 1000; i++)
	buffer[i] = array[i] * m;
      
      for (int i = 0; i < 1000; i++) {
	buffer[i+1] += buffer[i]/10;
	array[i] = buffer[i]%10;
      }
  }

  int sum = 0;
  for (int i = 0; i < 1000; i++)
    sum += array[i];

  return sum;

}

int main() {

  cout << factorial_sum(100) << endl;

  return 0;
}
