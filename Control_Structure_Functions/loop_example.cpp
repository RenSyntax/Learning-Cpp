// making a Simple Calculator v2, with loops

#include <iostream>
using namespace std;

int main() {
    char exit;
    do{
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
        cout << "Your Answer is: "<< multiplication << endl;
        cout << "--------------------------" << endl;
        cout << "Return to Start ? (y/n)" << endl;
        cin >> exit;
    }


    if (userAttempt == 2) {
        division = firstNumber / secondNumber;
        cout << "--------------------------" << endl;
        cout << "Your Answer Is: " << division << endl;
        cout << "--------------------------" << endl;
        cout << "Return to Start ? (y/n)" << endl;
        cin >> exit;
        
    }

    if (userAttempt == 3) {
        addition = firstNumber + secondNumber;
        cout << "--------------------------" << endl;
        cout << "Your Answer is: " << addition << endl;
        cout << "--------------------------" << endl;
        cout << "Return to Start ? (y/n)" << endl;
        cin >> exit;
        
    }

    if (userAttempt == 4) {
        subtraction = firstNumber - secondNumber;
        cout << "--------------------------" << endl;
        cout << "Your Anwer is: " << subtraction << endl;
        cout << "--------------------------" << endl;
        cout << "Return to Start ? (y/n)" << endl;
        cin >> exit;
        
    } } while(exit != 'n');

    return 0;





}
