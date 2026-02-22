// In this i am gona Learn about functions:

#include <iostream>
using namespace std;
int pin{546};
int balance{};

// So, function are basically automation scrips.
// It lets you automate a specific function in your program so you dont have
// have to copy and paste code everytime.

// Here is a good Example, i will try to make a mini ATM simulator with
// functions.

void userRecipt() {
  cout << "-------------------------\n";
  cout << "Your Balance Has updated\n";
  cout << "-------------------------\n";
}

bool cheakPin(int a) {
  int i{1};

  while (i <= 3) {
    if (a == pin) {
      return true;
    } else {
      if (i == 3) {
        break;
      }
      cout << "You Have " << 3 - i << "/3 Attempts Remmaing: ";
      cin >> a;
      ++i;
    }
  }
  return false;
}

int main() {
  while (true) {
    int userAttempt{};
    int userInput{};
    int amount{};
    cout << "Press 1: Deposit\n";
    cout << "Press 2: Withdraw\nPress 3: Exit\n";
    cin >> userInput;

    if (userInput == 3) {
      break;
    }

    cout << "Please Enter Your PIN: ";
    cin >> userAttempt;

    if (cheakPin(userAttempt)) {
      cout << "Please Enter The Amount: ";
      cin >> amount;
      switch (userInput) {
      case 1: {
        balance += amount;
        cout << userRecipt();
        break;
      }
      case 2: {
        balance -= amount;
        cout << userRecipt();
        break;
      }
      }
    } else {
      cout << "--> Access Denied <--\n";
    }
  }
  return 0;
}