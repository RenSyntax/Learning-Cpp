// Age calculator Fix

#include <iostream>
using namespace std;

int main() {
    int userYear{};
    int userMonth{};
    int userDay{};

    int currentYear{};
    int currentMonth{};
    int currentDay{};

    cout << "Please Enter Your Birth Date, In Format 'DD MM YYYY' " << endl;
    cin >> userDay >> userMonth >> userYear;
    cout<< "Please Enter Current Date, In Format 'DD MM YYYY' " << endl;
    cin >> currentDay >> currentMonth >> currentYear;

    int ageYear{};
    int ageMonth{};
    int ageDay{};

    ageYear = (currentYear - userYear)-2;

    if (userMonth < 12) {
        ageMonth = 2-((12-userMonth)+currentMonth);

    }
    
    if (userMonth == 12) {
        ageYear = ++ageYear;
        ageMonth = currentMonth-1;
    }

    ageDay = (30-userDay)+currentDay;

    if (ageDay >= 30) {
        ageMonth = ++ageMonth;
    }

    cout << "Your Age Is: " << ageYear << " Years " << ageMonth << " Month and " << ageDay << " Days Old.";

    return 0;
}
