// This is just the application of what i have learned in lectures.

#include <iostream>
using namespace std;
#include <string>

string hello(int x, int y) {
    int z{1};
    while(z <= x) {
        cout << "Hello" << endl;
        z++;
    }
    int l{1};
    while(l <=y) {
        cout << "World!!" << endl;
        l++;
        }
    return 0;
     }

int main() {
    int first{};
    int second{};
    cout << "How Many times you wana print, Hello & World" << endl;
    cin >> first >> second;
    cout << hello(first,second);
    return 0;
}