// Making a simple even/odd + sign cheaker.

#include <iostream>
using namespace std;

int main () {
    int userNumber{};
    cout << "Please Enter Your Number: ";
    cin >> userNumber;
    int condition{userNumber % 2};

    bool isEven{condition == 0};
    bool isPositive{userNumber > 0};

    if (userNumber == 0) {
        cout << "Your Given Number is: Even but nither Positive nor Negative" << endl;
        return 0;
    } 
    else if (!isEven && isPositive) {
        cout << "Your Given Number is: Odd and Positive" << endl;
        return 0;
    }
    else if (isEven && !isPositive) {
        cout << "Your Given Number is: Even and Negative" << endl;
        return 0;
    }
    else if (!isEven && !isPositive) {
        cout << "Your Given Number is: Odd and Negative" << endl;
        return 0;
    }
    else if (isEven && isPositive) {
        cout << "Your Given Number is: Even and Positive" << endl;
        return 0;
    }

    


}