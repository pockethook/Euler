// largest palindrome made from the product of two 3-digit numbers

#include <iostream>

using namespace std;

bool palindrone(int number);

int main() {
  
  int largest = 101*101;
  // for all combination of three digit numbers
  for (int i = 101; i < 1000; i++)
    for (int j = 101; j < 1000; j++)
      if (i*j>largest && palindrone(i*j))
	largest = i*j;

  cout << largest << endl;

  return 0;
}

bool palindrone(int number) {
  // the product of two three digit numbers gives a 5/6 digit number
  int digits = number/100000==0 ? 5 : 6;
  int array[512];

  // convert number into into an array of digits
  for (int i = 0; i < digits; i++) {
    array[i] = number%10;
    number/=10;
  }

  // if 5 digits the third digit can be unique
  if (digits == 5) 
    if (array[0]==array[4] &&
	array[1]==array[3])
      return true;

  if (digits == 6) 
    if (array[0]==array[5] &&
	array[1]==array[4] &&
	array[2]==array[3])
      return true;
  
  return false;
}

  
