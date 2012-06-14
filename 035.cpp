// circular primes below one million

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;

// generates array of primes below max                                                                                                       
// returns number of primes below max                                                                                                        
int generate_primes(const int max, int *(&prime));

// returns true if number is prime                                                                                                           
bool is_prime(int number, int *prime);

// return number of circular primes in array                                                                                                 
int circular_primes(int primes, int *prime);

int main() {

  int max = 1000000;
  int *prime = NULL;

  // number of primes below max                                                                                                              
  int primes = generate_primes(max, prime);
  int circular= circular_primes(primes, prime);

  cout << circular << endl;

  return 0;

}


int generate_primes(const int max, int *(&prime)) {

  prime = new int[max];
  prime[0] = 2;
  int primes = 1;

  // for each number                                                                                                                         
  for (int i = 3; i < max; i+=2) {
    bool flag = true;

    // for each prime number in array                                                                                                        
    for (int j = 0; j < primes; j++)
      if (i%prime[j] == 0) {
	flag = false;
        break;
      }

    if (flag)
      prime[primes++] = i;

  }

  return primes;
}

bool is_prime(int number, int *prime) {

  for (int i = 0; prime[i] <= number; i++)

    // prime if in array                                                                                                                     
    if (prime[i]==number)
      return true;

  return false;

}
int circular_primes(int primes, int *prime) {

  int count = 0;

  // for each prime number    

  for (int i = 0; i < primes; i++) {

    // number of digits of prime number                                                                                                      
    int digits;

    // string buffer for digits                                                                                                              
    char buffer[7];
    sprintf(buffer, "%d", prime[i]);
    digits = strlen(buffer);

    // prime flag                                                                                                                            
    bool flag = true;

    // for each circular permutation                                                                                                         
    for (int j = 0; j < digits-1; j++) {

      // store first digit                                                                                                                   
      char temp = buffer[0];

      // shuffle other digits                                                                                                                
      for (int k = 0; k < digits-1; k++)
        buffer[k] = buffer[k+1];

      // first digit becomes last                                                                                                            
      buffer[digits-1] = temp;

      // convert new permutation to int                                                                                                      
      int permutation = atoi(buffer);

      // if not prime break and remove flag                                                                                                  
      if (!is_prime(permutation, prime)) {
        flag = false;
        break;
      }
    }

    if (flag)
      count++;
  }

  return count;

}
