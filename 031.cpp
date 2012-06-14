// number of different ways to make two pounds

#include <iostream>

using namespace std;

int main() {

  int count = 0;

  for (int _200 = 0; _200 < 2; _200++)
    for (int _100 = 0; _100 < 3; _100++)
      for (int _050 = 0; _050 < 5; _050++)
        for (int _020 = 0; _020 < 11; _020++)
          for (int _010 = 0; _010 < 21; _010++)
            for (int _005 = 0; _005 < 41; _005++)
              for (int _002 = 0; _002 < 101; _002++)
                for (int _001 = 0; _001 < 201; _001++)
                  if (_200*200 + _100*100 + _050*50 + _020*20 + _010*10 + _005*5 + _002*2 + _001*1 == 200)
                    count++;

  cout << count << endl;

  return 0;
}
