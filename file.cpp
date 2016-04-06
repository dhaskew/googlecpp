// file.ccp David Askew
// Description: File processing example

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  char first_name[30], last_name[30];
  int age;
  char file_name[20];
  //collect the data
  cout << "Enter First Name: "; cin >> first_name;
  cout << "Enter Last Name: "; cin >> last_name;
  cout << "Enter Age: "; cin >> age;
  cout << endl;
  cout << "Enter the name of the file: "; cin >> file_name;
  // Create an ofstream called People and open the stream for output;
  ofstream People(file_name, ios::out);
  // Write the output to the stream.
  People <<  first_name << endl << last_name << endl << age << endl;
  return 0;
}
