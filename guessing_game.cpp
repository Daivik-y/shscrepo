//1. No global variables. (Global constants are all right.)

//2. No strings. Not ever. (You can use cstrings/character arrays, and the cstring and cctype libraries are okay. In fact, I recommend using strcmp and strlen in your projects.)

//3. You should include <iostream>, not stdio. (This applies more to C programmers.) Also, use "new" and "delete" instead of "malloc" and "free".



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

  bool play = true;

  while (play) {

  
  int count = 1;

  srand(time(0)); //seeding with time is needed for random number generation?? I do not like this language.

  int randomNum = rand() % 101;
  //  cout << randomNum <<endl;

  int userguess;
  cout << "Enter your guess: ";
  cin >> userguess;

  while (userguess != randomNum) {

    if (userguess > randomNum) {

      cout << "Guess is too high, ";
      cout << "Enter your guess: ";

    } else if (userguess < randomNum){

      cout << "Guess is too low, ";
      cout << "Enter your guess: ";
    }

    cin >> userguess;
    count++;
  }

  cout << "CORRECT ANSWER!!!";


  cout << "You guessed in " << count << " tries!!!!!!" << endl;

  char choice;
  cout << "play again? (y/n)";
  cin >> choice;

  if (choice == 'n' || choice == 'N') {
    play = false;
    }

}
return 0;
}

