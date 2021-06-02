#include "counterType.h"
#include <iostream>
#include <string>

using namespace std;

counterType::counterType()
{
  counter = 0;
}

counterType::counterType(int count)
{
  counterType::setCounter(count);
}
// Defining the get method from counterType.h
int counterType::getCounter()
{
  return counter;
}

// Defining the set method from counterType.h
void counterType::setCounter(int count)
{
  if (count < 0)
  {
    counter = 0;
  }
  else
  {
    counter = count;
  }
}

void counterType::setCounter()
{
  counter = 0;
}

void counterType::incrementCounter()
{
  counter = counter + 1;
}

void counterType::decrementCounter()
{
  counter = counter - 1;
  // preventing a negative count, and setting negative numbers back to 0
  if (counter < 0)
  {
    counter = 0;
  }
}

void counterType::print()
{
  cout << "Counter = " << counter << endl;
}
