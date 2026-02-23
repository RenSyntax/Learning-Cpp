// In i thing i will talk about the intro to pointers.
// so basically a pointer is nothing but a variable which stores the address of
// another variable. you can also access this other variable which the pointer
// is pointing to using the pointer itself.

#include <iostream>
using namespace std;
#include <string>

string line() { return "-----------------------------\n"; }

// you can change the value of a variable by function using pointers:
void changeValue(int *a) { *a = 120; }

void changeVal(int &val) { val = 100; }

int main() {
  int numberOne{1};

  // for the abouve variable we can define a pointer;
  // the syntax is similar to defining a variable but with little adjustment.
  int *pointerOne{&numberOne};

  // this basically prints the actuall location of variable numberOne.
  cout << pointerOne << "\n";

  // similarly, by puting a '*' we can access the content if the variable.
  cout << *pointerOne << "\n";

  // same as *pointerOne:
  cout << numberOne << "\n";

  cout << line();

  // Then there is Refrences, its basically aliace for your variable.
  // this the syntax
  int &ref{numberOne};
  cout << ref << "\n";

  cout << line();

  int x{100};

  changeValue(&x);
  cout << x << "\n";

  cout << line();

  // a much esiter alternatave of above is to use refrence:
  // in this what is happening is that even tho we are only changing val in the
  // void function, we still is able to change to value of val2.

  int val2{34};
  changeVal(val2);

  cout << val2 << "\n";

  return 0;
}