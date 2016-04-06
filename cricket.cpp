#include <iostream>

using namespace std;

int main()
{
  int degrees, num_chirps;

  do {
    cout << "Number of chirps: ";
    
    if(!(cin >> num_chirps))
    {
      cout << "Numbers only please" << endl;
      cin.clear();
      cin.ignore(10000, '\n'); 
    }
    else
    { 
      degrees = (num_chirps + 40)/4;

      cout << "The temperature is: " << degrees << " degrees. " << endl;
      break;
    }
  } while(1);

  return 0;
}
