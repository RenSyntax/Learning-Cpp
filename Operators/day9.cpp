// For this project, i will make a ATM simulator.

#include <iostream>
using namespace std;

int main () {
    int userInput{};
    int balance{30};
    int deposit{};
    int withdrow{};
    int pin{2056};
    int userAttempt{};
    cout << "----------------" << endl;
    cout << "Press 1, Deposit" << endl;
    cout << "----------------" << endl;
    cout << "Press 2, Withdrow" << endl;
    cout << "-----------------" << endl;
    cout << "Press 3, Change Pin" << endl;
    cout << "-----------------" << endl;
    cout << "Press 4, Check Balance" << endl;
    cout << "-----------------" << endl;
    cin >> userInput;

    if (userInput > 4) {
        cout << "--------------------------" << endl;
        cout << "Please Enter A Valid Input" << endl;
        cout << "--------------------------" << endl;
        return 0;
    }

     if (userInput < 1) {
        cout << "--------------------------" << endl;
        cout << "Please Enter A Valid Input" << endl;
        cout << "--------------------------" << endl;
        return 0;
    }


    if (userInput == 1) {
        cout << "------------------------------------------" << endl;
        cout << "Please Enter The Amount:" << endl;
        cout << "Also Enter The Cash Or Card In ATM." << endl;
        cout << "-------------------------------------------" << endl;
        cin >> deposit;
        cout << "--------------------------" << endl;
        cout << "Please Enter Your Pin: ";
        cin >> userAttempt;

        if (userAttempt == pin) {
        balance = balance + deposit;
        cout << "-------------------------------" << endl;
        cout << "Your Balance Has Been Deposited" << endl;
        cout << "----------Thank You------------" << endl;
        return 0;
        } else {
            cout << "--------------------------" << endl;
            cout << "Entered Pin Is Wrong; " << endl;
            cout << "--------------------------" << endl;
            return 0;
        }
        
    }

    if (userInput == 2) {
        cout << "-------------------------------------" << endl;
        cout << "Please Enter The Amount To Withdrow: " << endl;
        cin >> withdrow;
        cout << "--------------------------" << endl;
        cout << "Please Enter Your Pin: " << endl;
        cin >> userAttempt;

        if (userAttempt == pin){

            if (withdrow > balance) {
        
            cout << "-------------------------" << endl;
            cout << "Your Balance Is Insufficient" << endl;
            cout << "-------------------------" << endl;
            return 0;  

        }
        if (balance > withdrow){
            balance = balance - withdrow;
            cout << "-------------------------" << endl;
            cout << "Your Balance Has Updated" << endl;
            cout << "-------------------------" << endl;
            return 0;

        } 
           
        } else {
            cout << "--------------------------" << endl;
            cout << "Your Entered Pin Is Wrong; " << endl;
            cout << "--------------------------" << endl;

            return 0;
        }

        
        
    }

    if (userInput == 3) {
        cout << "-----------------------------" << endl;
        cout << "Please Enter Your Old Pin: " << endl;
        cin >> userAttempt;

        if (userAttempt == pin) {
            cout << "-----------------------------" << endl;
            cout << "Please Enter Your New Pin: " << endl;
            cin >> pin;
            cout << "--------------------------" << endl;
            cout << "Your Pin Has Been Updated" << endl;
            cout << "-------------------------" << endl;
            return 0;

        } else {
            cout << "--------------------------" << endl;
            cout << "Your Entered Pin Is Wrong" << endl;
            cout << "--------------------------" << endl;
            return 0;
        }

        
    }

    if (userInput == 4) {
       cout << "--------------------------" << endl;
       cout << "Please Enter Your Pin: " << endl;
       cin >> userAttempt;

       if (userAttempt == pin) {

        if (balance <= 100 && balance > 0) {
        cout << "-------------------------------------------------------------------" << endl;
        cout << "Bro No Need For Check The Balnce, In Short You Are Broke As Hell!!!" << endl;
        cout << "--------------------------------------------------------------------" << endl;
        return 0;

        }

        if (balance == 0) {
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "Your Balance: " << balance << "  | Please Buy Psychology Of Money Book And Read It." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        return 0;

        }

        cout << "--------------------------" << endl;
        cout << "Your Balance: " << balance << endl;
        cout << "--------------------------" << endl;
        
       } else {
            cout << "--------------------------" << endl;
            cout << "Your Entered Pin Is Wrong; " << endl;
            cout << "--------------------------" << endl;
            return 0;
         } 
       
        
    }
}