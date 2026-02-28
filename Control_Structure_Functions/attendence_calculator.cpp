// A simple attendence calculator for College or high school.

#include <iostream>
#include <string>
using namespace std;

int attendence{};
int lectures{};
int totalClass{};
int maths{};
int science{};
int computerScience{};
int english{};

void subjects() {

  cout << "Please Enter The Number Of Lectures: ";
  cin >> lectures;

  int userInput2{};
  cout << "Which Subject ?\n";
  cout << "1. English\n2. Maths\n3. Computer Science\n4. Science\n";
  cin >> userInput2;

  switch (userInput2) {
  case 1: {
    english += lectures;
    cout << "Updated Sucsessfully\n";
    break;
  }
  case 2: {
    maths += lectures;
    cout << "Updated Sucsessfully\n";
    break;
  }
  case 3: {
    computerScience += lectures;
    cout << "Updated Sucsessfully\n";
    break;
  }
  case 4: {
    science += lectures;
    cout << "Updated Sucsessfully\n";
    break;
  }
  default: {
    cout << "Please Enter A Valid Input\n";
    break;
  }
  }
  return;
}

void subjects2() {

  cout << "Please Enter The Number Of Lectures: ";
  cin >> lectures;

  int userInput2{};
  cout << "Which Subject ?\n";
  cout << "1. English\n2. Maths\n3. Computer Science\n4. Science\n";
  cin >> userInput2;

  switch (userInput2) {
  case 1: {
    english -= lectures;
    cout << "Updated Sucsessfully\n";
    break;
  }
  case 2: {
    maths -= lectures;
    cout << "Updated Sucsessfully\n";
    break;
  }
  case 3: {
    computerScience -= lectures;
    cout << "Updated Sucsessfully\n";
    break;
  }
  case 4: {
    science -= lectures;
    cout << "Updated Sucsessfully\n";
    break;
  }
  default: {
    cout << "Please Enter A Valid Input\n";
    break;
  }
  }
  return;
}

void calculatePercentage() {
  cout << "Enter The Total Number of Lectures\n";
  cin >> totalClass;

  int userInput2{};
  cout << "Which Subject ?\n";
  cout << "1. English\n2. Maths\n3. Computer Science\n4. Science\n";
  cin >> userInput2;

  switch (userInput2) {
  case 1: {
    float percentage{english * 100.0 / totalClass};
    cout << "Your Attendence is: " << percentage << " %" << endl;
    break;
  }
  case 2: {
    float percentage{maths * 100.0 / totalClass};
    cout << "Your Attendence is: " << percentage << " %" << endl;
    break;
  }
  case 3: {
    float percentage{computerScience * 100.0 / totalClass};
    cout << "Your Attendence is: " << percentage << " %" << endl;
    break;
  }
  case 4: {
    float percentage{science * 100.0 / totalClass};
    cout << "Your Attendence is: " << percentage << " %" << endl;
    break;
  }
  default: {
    cout << "Please Enter A Valid Input\n";
    break;
  }
  }
  return;
}

void totalAttendence() {
  int userInput2{};
  cout << "Which Subject ?\n";
  cout << "1. English\n2. Maths\n3. Computer Science\n4. Science\n";
  cin >> userInput2;

  switch (userInput2) {
  case 1: {
    cout << "Your Attendence is: " << english;
    break;
  }
  case 2: {
    cout << "Your Attendence is: " << maths;
    break;
  }
  case 3: {
    cout << "Your Attendence is: " << computerScience;
    break;
  }
  case 4: {
    cout << "Your Attendence is: " << science;
    break;
  }
  default: {
    cout << "Please Enter A Valid Input\n";
    break;
  }
  }
  return;
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
      subjects();
      break;
    }

    case 2: {
      subjects();
      break;
    }

    case 3: {
      calculatePercentage();
      break;
    }
    case 4: {
      totalAttendence();
      break;
    }
    default: {
      cout << "Please Enter A Valid Input..\n";
    }
    }
  }
  return 0;
}
