#include <iostream>
#include "circularLinkedList.h"

using namespace std;

int main()
{
  circularLinkedList<int> list;
  int num;

  cout << "Enter a list of numbers, and end the list with -999:" << endl;
  cin >> num;

  while (num != -999)
  {
    list.insertNode(num);
    cin >> num;
  }
  cout << endl;

  //Print list 1 and its length
  cout << "List 1: ";
  list.print();
  cout << endl;
  cout << "Length List 1: " << list.length() << endl;

  //Searching list 1
  cout << "Enter the number to be searched: ";
  cin >> num;
  cout << endl;

  if (list.search(num))
  {
    cout << num << " found in the list.";
  }
  else
  {
    cout << num << " not in the list.";
  }
  cout << endl;

  //Deleting from list 1
  cout << "Enter a number to be deleted: ";
  cin >> num;
  cout << endl;
  list.deleteNode(num);
  cout << endl;
  cout << "After deleting the node, ";
  list.print();
  cout << endl;
  cout << "Length List 1: " << list.length() << endl;

  return 0;
}
