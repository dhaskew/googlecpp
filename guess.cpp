#include <iostream>
#include <time.h>

using namespace std;

int main()
{
  int random_number, guess;

  srand (time(NULL));
  
  random_number = rand() % 100 + 1;
  do {
    
    cout << "Geuss the random number (1-100): ";

    if (!( cin >> guess ))
    {
      cout << "Please guess only numbers" << endl; 
      cin.clear();
      cin.ignore(10000,'\n'); 
    }
    else
    {
      if (random_number < guess) cout << "The random number is lower than " << guess << endl;
      else if (random_number  > guess) cout << "The random number is greater than " << guess << endl;
      else cout << "You guessed it: " << random_number << endl;
    }
  } while (random_number != guess); 

  cout << "Congratulations!" << endl;
  return 0;
}
