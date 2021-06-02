#ifndef _COUNTER_TYPE_H
#define _COUNTER_TYPE_H

class counterType
{
  // initialize counter
private:
  int counter;

public:
  counterType();
  counterType(int);

  // Basic Crud Behavoirs for counterType class
  // Get method
  int getCounter();
  // Set method
  void setCounter(int);
  // Set method with no params
  void setCounter();
  // Update method - incrementing counter value
  void incrementCounter();
  // Update method - decrementing counter value
  void decrementCounter();
  void print();
};
#endif
