#include <iostream>

using namespace std;

void accelerate(int &speed, int increase)
{
  speed = speed + increase;
} 

int main()
{
  int current = 10;

  accelerate(current, 15);
  cout << "Current spead is: " << current << endl;
  return 0;
}

