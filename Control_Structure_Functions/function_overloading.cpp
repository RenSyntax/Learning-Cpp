// function overloading is nothing but a very small concept.
// when you have to two functions whose core working is same, but the inputs or
// outputs are little diffrent, what you can do is you can name those function
// the same name and it will work just fine, becasue cpp will diffrensiate the
// functions based on inputs type..

// Here is a Example:

#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

double add(double a, double b) { return a + b; }

// here you can see that the name of both functions are same but they return
// diffrent data type. this was a very simple example, you can go full creative
// mode with what combinations or input combinations you can write.
int main() {
  cout << add(3, 4) << "\n";
  cout << add(3.4, 4.5) << "\n";
  return 0;
}
