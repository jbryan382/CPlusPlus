#include <iostream>
#include "doublyLinkedList.h"

using namespace std;

void copyConstructor(doublyLinkedList<int> list);

int main()
{
  doublyLinkedList<int> intList, tempList;
  int num;

  cout << "Enter a list of numbers, and end the list with -999:" << endl;
  cin >> num;

  while (num != -999)
  {
    intList.insert(num);
    cin >> num;
  }

  //Ascending
  cout << endl;
  cout << "Ascending Order: ";
  intList.print();
  cout << endl;

  //Descending
  cout << endl;
  cout << "Descending Order: ";
  intList.reversePrint();
  cout << endl;

  //List after deletion
  cout << "Enter a number for deletion: ";
  cin >> num;
  cout << endl;
  intList.deleteNode(num);
  cout << endl;
  cout << "List after deleting: " << num << endl;
  intList.print();
  cout << endl;

  //List search
  cout << "Enter a number to search: ";
  cin >> num;
  cout << endl;
  if (intList.search(num))
  {
    cout << num << " found in the list.";
  }
  else
  {
    cout << num << " is not in the list.";
  }
  cout << endl;

  // //Copying attempt
  // cout << "Copying..."
  // copyConstructor(intList);
  // cout << "intList: ";
  // intList.print();
  // cout << endl;

  // //Assignment attempt
  // cout << "Assigning..."
  // tempList = intList;
  // cout << "tempList: ";
  // intList.print();
  // cout << endl;

  return 0;
}

void copyConstructor(doublyLinkedList<int> list)
{
}
