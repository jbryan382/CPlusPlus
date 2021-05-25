#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   //varibles
   double pounds =2.2;
   double weightInKilos;
   double weightInPounds;
   //User input
   cout << "Enter current weight in kilograms :\n";
   cin >> weightInKilos;
  
   //Convert kilograms to pounds
   weightInPounds = weightInKilos * pounds;
  
   //Set fixed and precistion to 2 , display output in two decimals
   cout << fixed << setprecision(2);
  
   //Display weightInPounds
   cout<<"Current weight in lbs is : " << weightInPounds << endl;
}
