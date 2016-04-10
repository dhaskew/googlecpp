#include <iostream>

using namespace std;

int main()
{
  int total_seconds;
  
  do {

    cout << "Number of seconds: ";

    if(!(cin >> total_seconds))
    {
      cout << "Numbers only please" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
    else
    {
      int hours = total_seconds/3600;
      int mins = ( total_seconds - (hours * 3600) ) / 60;
      int secs = (total_seconds - (hours * 3600 ) - ( mins * 60 ) );

      cout << "Hours: " << hours << " Mins: " << mins << " Secs: " << secs << endl; 
      break;
    }

  } while(1);

  return 0;
}
