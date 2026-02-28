// A simple attendence calculator for College or high school.

#include <iostream>
#include <string>
using namespace std;

int attendence{};
int lectures{};
int totalClass{};

float calculatePercentage() {
  float percentage{attendence * 100.0 / totalClass};
  return percentage;
}

int main() {

  while (true) {
    int userInput{};

    cout << "Press 1: Add Attendence\n";
    cout << "Press 2: Remove Attendence\n";
    cout << "Press 3: Calculate Percentage\n";
    cout << "Press 4: See Your Total Attendence\n";
    cin >> userInput;

    switch (userInput) {
    case 1: {
      cout << "Enter The Number Of Lectures Attempted Today: ";
      cin >> lectures;

      attendence += lectures;
      cout << "Attendence Added Sucsessfully.\n";
      break;
    }

    case 2: {
      cout << "Enter The Number of Lectures, You Wana Remove: ";
      cin >> lectures;

      attendence -= lectures;
      cout << "Attendence Updated.\n";
      break;
    }

    case 3: {
      cout << "Enter Total Number Of Lectures: \n";
      cin >> totalClass;

      // Here is what i learned from this bug:
      // you have to multiply specifically to one variable, otherwise it wont
      // work.
      cout << "Your Attendence Percentage is: " << calculatePercentage() << " %"
           << endl;
      break;
    }
    case 4: {
      cout << "Your Total Attendence is: " << attendence << endl;
      break;
    }
    default: {
      cout << "Please Enter A Valid Input..\n";
    }
    }
  }
  return 0;
}
