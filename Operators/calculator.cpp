// making a Simple Calculator

#include <iostream>
using namespace std;

int main() {
    int firstNumber{};
    int multiplication{};
    int division{};
    int addition{};
    int subtraction{};

    cout << "--------------------------" << endl;
    cout << "Enter The First Numeber: " << endl;
    cin >> firstNumber;


    int userAttempt{};
    cout << "Press 1 for Multiplication" << endl;
    cout << "Press 2 for Division" << endl;
    cout << "Press 3 for Addition" << endl;
    cout << "Press 4 for Subtraction" << endl;
    cout << "--------------------------" << endl;
    cout << "Select the Operation: " << endl;
    cin >> userAttempt;

    int secondNumber{};
    cout << "Enter The Second Number: " << endl;
    cin >> secondNumber;

    if (userAttempt == 1) {
        multiplication = firstNumber * secondNumber;
        cout << "--------------------------" << endl;
        cout << multiplication << endl;
        cout << "--------------------------" << endl;
        return 0;
    }


    if (userAttempt == 2) {
        division = firstNumber / secondNumber;
        cout << "--------------------------" << endl;
        cout << division << endl;
        cout << "--------------------------" << endl;
        return 0;
    }

    if (userAttempt == 3) {
        addition = firstNumber + secondNumber;
        cout << "--------------------------" << endl;
        cout << addition << endl;
        cout << "--------------------------" << endl;
        return 0;
    }

    if (userAttempt == 4) {
        subtraction = firstNumber - secondNumber;
        cout << "--------------------------" << endl;
        cout << subtraction << endl;
        cout << "--------------------------" << endl;
        return 0;
    }





}
