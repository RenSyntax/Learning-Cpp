// a new calculator:

#include <iostream>
using namespace std;

void operatorDisplay() {
  cout << "------------------------------\n";
  cout << "Please Enter Your Operator: \n";
  cout << "Press 1: Addition\nPress 2: Subtraction\nPress 3: "
          "Multiplication\nPress 4: Division\n Press 5: Equal to\n"
}
int main() {
  while (true) {
    cout << "Please Enter Your Number: ";
    cin >> num1;

    operatorDisplay();
    cin >> operator;
  }
}