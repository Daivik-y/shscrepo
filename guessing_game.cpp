#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand(time(0)); //seeding with time is needed for random number generation?? I do not like this language.
  
  int randomNum = rand() % 101;
  //cout << randomNum <<endl;
  
  int userguess;
  cout << "Enter your guess: ";
  cin >> userguess;

  while (userguess != randomNum) {

    if (userguess > randomNum) {

      cout << "Guess it too high: ";
      cin >> userguess;

    }

  }
  
  cout << "your guess: " << userguess << endl;
  return 0;
}
