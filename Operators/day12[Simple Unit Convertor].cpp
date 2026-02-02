//  Simple Unit Convertor 

#include <iostream>
using namespace std;

int main() {
    int initialUnit{};
    float firstUnit{};
   
    cout << "Press 1: Km --> m" << endl;
    cout << "Press 2: Km/hr --> m/sec" << endl;
    cout << "Press 3: °C --> °F" << endl;
    cout << "Select The Conversion: ";
    cin >> initialUnit;

    cout << "Please Enter The Initial Unit You Want To Convert: ";
    cin >> firstUnit;
    int m{firstUnit * 1000};
    float second{firstUnit * 5.0/18};
    float temp{(firstUnit * 9.0/5) + 32};


    if (initialUnit == 1) {
        cout << "Here is your converted unit: " << m;
        return 0;

    }
    else if (initialUnit == 2) {
        cout << "Here is your converted unit: " << second;
        return 0;
    }
    else if (initialUnit == 3) {
        cout << "Here is your converted unit: " << temp;
        return 0;
    }
    else{
        cout << "Please Enter A Valid Input";
        return 0;
    } 
    



}
