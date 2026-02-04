// making a Age calculator with acurracy of years, months & days.

// Tring to fix the problem with month and days, but kinda went out of time 😅
// Future me if reading this, then please fix it.....
#include <iostream>
using namespace std;

int main() {
    int userYear{};
    int userMonth{};
    int userDay{};

    cout << "Please Input Your Birth Year (in numbers only)." << endl;
    cin >> userYear;
    cout << "Please Input Your Birth Month (in numbers only)." << endl;
    cin >> userMonth;
    cout << "Please Input Your Birth Day (in numbers only)." << endl;
    cin >> userDay;
    cout << "Please Enter Current Year." << endl;

    int currentYear{};
    int currentMonth{};
    int currentDay{};

    cin >> currentYear;
    cout << "Please Enter Current Month." << endl;
    cin >> currentMonth;
    cout << "Please Enter Current Day." << endl;
    cin >> currentDay;
    cout << "Here Is your Exact Age." << endl;
    int year{currentYear - userYear};
    int month{};
    
    if (currentMonth > userMonth) {
        int month{currentMonth - userMonth};
    }
    else if (currentMonth < userMonth) {
        int month{userMonth - currentMonth};
    }
    int day{};
    if (currentDay > userDay) {
        int day{currentDay - userDay};
    }
    else if (currentDay < userDay) {
        int day{userDay - currentDay};
    }

    cout << "You Are: " << year << " Years ," << month << " Months and " << day << " Days Old." << endl;
    return 0;
    
}
