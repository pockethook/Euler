// smallest positive number evenly divisible by all the numbers from 1 to 20

#include <iostream> 

using namespace std;

int main() {

  long max = 1;
  // largest number product of all
  for (int i = 2; i < 21; i++)
    max*=i;

  long smallest;

  for (long i = 1; i <= max; i++) {
    bool flag = true;

    // for each divisor
    for (int j = 2; j < 21; j++)
      // if not divisible try next highest number
      if (i%j!=0) {
	flag = false;
	break;
      }
  
    // if divisible by all numbers break loop
    if (flag) {
      smallest = i;
      break;
    }   
  }
  
  cout << smallest << endl;
  
  return 0; 
}
