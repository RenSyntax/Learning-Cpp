/*
So there are three types of loops, 
1. for loop.
2. while loop.
3. do-while loop
*/

#include <iostream>
using namespace std;

int main() {
    // First lets discuss for loop,
    // it is used when number of repetation is constant, just becasue it looks cool and clean 😅

    for(int x = 1; x <= 3; x++ ) {
        cout << "This Is for loop." << endl;
    }

    cout << "-----------------------------------" << endl;

    // now lets see at while loop, while loop is used when repeatation is variable.
    // why not for loop ? becasue world love us begaineer to suffer, just kidding,
    // the real reason is becasue it looks clean and cool with variable. thats it.

    int y = 1;
    while(y <= 4) {
        cout << "This is while loop." << endl;
        y++;
    }

    cout << "-----------------------------------" << endl;

    // lets see the main thing now the, do-while loop.
    // the only diffrence is that it first executes a block a code and then execute a while code after that.
    // just like the name suggest, first it 'do' a fixed piece of code then 'while' loop another code block.


    // Explaination;
    /*
    This code basically says that, do the above code while choice != 'y'.
    But when it becomes otherwise then below code will be executed.
    */
    char choice;
    do {
        cout << "Are you dumb ?(y/n)" << endl;
        cin >> choice;

    } while(choice != 'y');
    cout << "Atleast, You Know Reality." << endl;
    return 0;

    
}