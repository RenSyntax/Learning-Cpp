// Switch Statement Learnings:

#include <iostream>
using namespace std;

int main() {
    int userAge{};
    
    cout << "Please Enter Your Age." << endl;
    cin >> userAge;

    // looks cleaner than if/else, but still i prefer if/else.
    // switch statements are prefered if condition has constant.

    switch (userAge) {
        case 18:
        cout << "You Are Legally A Adult." << endl;
        break;
        case 12:
        cout << "Sorry, Kids not allowded on this website" << endl;
        break;
        case 60:
        cout << "Thanks for using my program" << endl;
        [[fallthrough]];
        case 61:
        cout << "Visit Again" << endl;
        break;
        default:
        cout << "Sorry, your age doesn't match the data base";

    }
    return 0;


}