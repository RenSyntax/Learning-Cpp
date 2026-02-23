// In i thing i will talk about the intro to pointers.
// so basically a pointer is nothing but a variable which stores the address of
// another variable. you can also access this other variable which the pointer
// is pointing to using the pointer itself.

#include <iostream>
using namespace std;
#include <string>

string line() { return "-----------------------------\n"; }

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
}