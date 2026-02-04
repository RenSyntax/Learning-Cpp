// A Simple Budget Calculator:

#include <iostream>
using namespace std;

int main() {
    cout << "how much for Parents ?" << endl;
    int Parents{};
    cin >> Parents;
    if (Parents < 5000) {
        cout << "Bro show some more respect to your famity, less than 5k ? are you serious" << endl;
    }
    int Rent{};
    cout << "how much for Rent ?" << endl;
    cin >> Rent;
    cout << "how much for Party ?" << endl;
    int Party{};
    cin >> Party;
    cout << "how much for Food ?" << endl;
    int food{};
    cin >> food;
    if (food < 4000) {
        cout << "bro are you planning on surving on cup noodle for the whole month or what ?" << endl;
    }
    cout << "how much for personal use ?" << endl;
    int Personaluse{};
    cin >> Personaluse;
    int salary{};
    cout << "how much is your salary ?" << endl; 
    cin >> salary;
    int savings{salary - Parents + Rent + Party + food + Personaluse};
    cout << "Here is your savings for the month." << endl << savings << endl;
    if (savings < 1000) {
        cout << "Bro what are you doing with your life ?";
    }

    return 0;


}
