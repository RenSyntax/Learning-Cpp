// A Very basic Reminder Program.

#include <iostream>
#include <string>
int main (){
    std::string weekDays = "bro today is a weekday";
    enum today{sunday, monday, tuesday, wednesday};
    int today{1};
    if (today == 1 or 2 or 3) {
        std::cout << weekDays;
        return 0;
    }
    else if (today == 0) {
        std::cout << "today is sunday, you stupid asshole, so enjoy yourself";
        return 0;
    }
}
