// Project, Simple Age Calculator. Acurracy only Years.

#include <iostream>
using namespace std;

int main() {

    cout << "Hello Bro, tell me your Birth Year ?" << endl;
    int userBirthYear{};
    cin >> userBirthYear;
    cout << "Bro can you also tell me current year ?" << endl;
    int currentYear{};
    cin >> currentYear;
    int userAge{currentYear-userBirthYear};
    cout << "Here is Your Age:" << endl;
    cout << userAge;
    if (userAge >= 50) {
        cout << ", bro dont forget to enjoy your life";
        return 0;
    }
    if (userAge <= 20) {
        cout << ", bro these years are very Important, most people dont utilize them, but you should";
        return 0;
    }
    if (userAge >= 70) {
        cout << ", I hope that you are in good health, thanks for using my program";
        return 0;
    }
    return 0;

}
