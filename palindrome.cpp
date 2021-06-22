#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string message)

{
  if (message.length() < 2)
  {
    return true;
  }

  if (message[0] != message[message.length() - 2])
  {
    return false;
  }

  string substring = message.substr(1, message.length() - 2);
  if (!isPalindrome(substring))

  {
    return false;
  }

  return true;
}

int main()

{

  string message;

  cout << "Enter a word or phrase to check if it's a palindrome: ";

  cin >> message;

  if (isPalindrome(message))
  {

    cout << "Not a palindrome." << endl;
  }
  else
  {

    cout << "Confirmed Palindrome" << endl;
  }
}
