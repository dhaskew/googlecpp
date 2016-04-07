#include <iostream>
#include <string>

using namespace std;

namespace {
  const double fweight = 0.35;
  const double mweight = 0.15;
  const double aweight = 0.40;
  const double pweight = 0.10;
}

int get_grade(string prompt)
{
  int collected_data;
  do {
    
    cout << prompt << ": ";
    if(!(cin >> collected_data))
    {
      cout << "Whole numbers only please" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
    else
    {
      return collected_data;
    } 
  
  } while(1);
}

int main()
{
    int pgrade = get_grade("Enter participation grade"); 
    int ag1 = get_grade("Enter assignment #1 grade");
    int ag2 = get_grade("Enter assignment #2 grade");    
    int ag3 = get_grade("Enter assignment #3 grade");    
    int ag4 = get_grade("Enter assignment #4 grade");    
    int mgrade = get_grade("Enter midterm grade");
    int fgrade = get_grade("Enter final exam grade");

    int a_avg = (ag1 + ag2 + ag3 + ag4)/4;

    double final_grade = (pgrade * pweight) + (mgrade * mweight) + (fgrade*fweight);
    final_grade = final_grade + (a_avg * aweight);

    cout << "Your final grade is: " << final_grade << endl;

  return 0;
}
