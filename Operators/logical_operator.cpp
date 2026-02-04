/* Today i learned about the Logical Operators and Bitwise operators. 
Honestly the more i learn, the more it feels that i am getting closer to having tools to create something like a perfect Age Calculator.
i am very excited, on what and all things i will learn in future*/

#include <iostream>
using namespace std;

int main() {
  // Logical AND operator
  int userAge{};
  cout << "Please enter Your Age";
  cin >> userAge;
  if (userAge < 10 && userAge > 50) {
    cout << "Hello, i am happy that you decided to use my program.";
  }
  if (userAge == 18 || userAge == 17) {
    cout << "Bro you are of My Age.";
  }
  if (!userAge) {
    cout << "how the hell you can have Zero Age ?";
  }

  // also learned about the short circuit evaluation, can think of any magor useage but still good to know..

  // bituse operator
  int val{9};
  int val2{12};
  cout << val & val2 << endl;

  int val3{2};
  int va4{9};
  cout << val3 | val4 << endl;

  return 0;
}
