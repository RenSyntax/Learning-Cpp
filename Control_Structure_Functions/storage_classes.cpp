// This is types of storage classes:
// 1: Local
// 2: static
// 3: global

#include <iostream>
using namespace std;

// this is a global variable, as i can access it in any function.
int hello{2342};

int main() {
  cout << hello << endl;

  // this is a local variable
  // accessesable only in this function only.
  int local{0949};
  cout << local << endl;

  // then there is a new type called static.
  // in this the variable stores the value untill the programe ends.
  // can be very helpful in loops.
  static int staticVar{22424};
  cout << staticVar << endl;

  ++staticVar;
  cout << staticVar << endl;

  return 0;
}
