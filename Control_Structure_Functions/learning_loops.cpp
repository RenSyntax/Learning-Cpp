/*
So there are three types of loops, 
1. for loop.
2. while loop.
3. do-while loop
*/

#include <isotream>
using namespace std;

int main() {
    // First lets discuss for loop,
    // it is used when number of repetation is constant, just becasue it looks cool and clean 😅

    for(int x = 1; x <= 3; x++ ) {
        cout << "This Is for loop." << endl;
    }

    cout << "-----------------------------------" << end;

    // now lets see at while loop, while loop is used when repeatation is variable.
    // why not for loop ? becasue world love us begaineer to suffer, just kidding,
    // the real reason is becasue it looks clean and cool with variable. thats it.

    int y = 1
    while(y <= 4) {
        cout << "This is while loop." << endl;
        y++
    }

    cout << "-----------------------------------" << end;

    

}