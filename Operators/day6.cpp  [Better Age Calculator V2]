// making a Age calculator with acurracy of years, months & days.
// Tried using some math logic to fix it, but failed badly 🤣. 
// still got to learn alot of things, i thought age calculator will be easy but its not.
// and thats not a problem, more complex means more excitment. i am excited for tommorow...
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
    int year{currentYear - userYear - 1};
    int month{};
    
    if (currentMonth > userMonth) {
        month = currentMonth-1 - 12-userMonth;
    }
    else if (currentMonth < userMonth) {
        month = 12-userMonth - currentMonth-1;
    }
    int day{};
    if (currentDay > userDay) {
        day = 30-currentDay + 30-userDay;
    }
    else if (currentDay < userDay) {
        day = 30-userDay + 30-currentDay;
    }

    cout << "You Are: " << year << " Years ," << month << " Months and " << day << " Days Old." << endl;
    return 0;
    
}
