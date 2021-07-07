#include <iostream>
#include "myStack.h"

using namespace std;

int main() {
    // let the user know about the program
    cout << "Program to overload the realtional " << "operator == for the class stackType." << endl;

// initialize objects
    stackType<int> stack1(13);
    stackType<int> stack2(25);

// insert new elements into the stacks
    cout << "Inserting elements 5, 10, 15, etc. into both the stacks.";
    for(int i = 5; i < 20; i+=5)
    {
      stack1.push(i);
      stack2.push(i);
    } // end for

//check equality and print results
    if(stack1 == stack2)
      cout << "The stacks are equal" << endl;
    else
      cout << "The stacks are not equal" << endl;

// insert another element into stack 2
    cout<<"Inserting element 11 to the second stack." << endl;
    stack2.push(11);

//check equality and print results
    if (stack1 == stack2){
      cout << "The stacks are equal" << endl;
    }
    else{
      cout << "The stacks are not equal" << endl;
    }

    return 0;
}
