#include <iostream>

using namespace std;

int sumDigits(int number);

int main() {
  int number;
  int sum;
  cout << "Type in a number: ";
  cin >> number;
  sum = sumDigits(number);
  cout << "The sum of the digits is: " << sum << endl;
    return 0;
}

int sumDigits(int number){
  if(number <= 0){
    // once the number is less than 0 stop summing
    return 0;
  } else {
    // Mod by ten to reduce the int and remove 
    // the ones place, tens place etc. Then call sumDigits
    // while dividing the number by 10
    return number % 10 + sumDigits(number/10);
  }
}

