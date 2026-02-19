// This isATM simulator with loops..
// its a perfect example of how much easy and efficient you can make your code with loops.

#include <iostream>
using namespace std;

int main() {

   // i have taken added these specific variables outside the main loop becasue,
   // it makes sure that it doesnt resets back to defalt value after the programe auto restarts(loops).
    int balance{};
    int pin{7635};

    while(true) {
        int userChoise{};
        int deposit{};
        int withdraw{};
        int newPin{};
        int userAttempt{};

        // using a bool value is perfect and looks way better and clean then standard int variable.
        bool pinCorrect = false;

        cout << "-------------------------" << endl;
        cout << "Press 1: Deposit" << endl;
        cout << "Press 2: Withdraw" << endl;
        cout << "Press 3: Cheak Balance" << endl;
        cout << "Press 4: Change Pin" << endl;
        cout << "-------------------------" << endl;
        cin >> userChoise;

        // i have used switch statement becasuse it looks way more better and clearner than if/else
        // and are also somewhat better for loops.

        switch(userChoise) {
            case 1: {
            cout << "Please Enter The Amount: ";
            cin >> deposit;

            int i = 1;

            // Right now i have to copy paste this passward cheaker programe, but when i learn functions,
            // it would look way more clearner and fast.
             while(i <= 3) {
             cout << "Please Enter Your Pin: ";
             cin >> userAttempt;

             if (i == 3){
               break;
             }

             if (userAttempt == pin) {
                pinCorrect = true; 
                break;
             } else {
                cout << "Wrong Pin, Remmaing Attempts(" << 3-i << "/3)" << endl;
                i++;
             }
         
              }

            if (pinCorrect) {
                balance += deposit;
                cout << "-------------------------" << endl;
                cout << "Your Balance Has Been Updated" << endl;
                cout << "-------------------------" << endl;
                break; 
            } else {
               cout << "Access Denied" << endl;
               break;
            }
          }

            case 2: {
            cout << "Enter The Amount: ";
            cin >> withdraw;

            if (withdraw > balance) {
                cout << "---------------------------------" << endl;
                cout << "You Don't Have Sufficient Funds" << endl;
                cout << "---------------------------------" << endl;
                return 0;
            }

            int j = 1;
            while(j <= 3) {
             cout << "Please Enter Your Pin: ";
             cin >> userAttempt;

             if (j == 3) {
               break;
             }

             if (userAttempt == pin) {
                pinCorrect = true; 
                break;
             } else {
                cout << "Wrong Pin, Remmaing Attempts(" << 3-j << "/3)" << endl;
                j++;
             }

            }

            if (pinCorrect) {

                balance -= withdraw;
                cout << "---------------------------" << endl;
                cout << "Your Transaction Successful" << endl;
                cout << "---------------------------" << endl;
                break;
            } else{
               cout << "Access Denied" << endl;
               break;
            }
           }

            case 3: {

            int k = 1;
            while(k <= 3) {
             cout << "Please Enter Your Pin: ";
             cin >> userAttempt;

             if (k == 3) {
               break;
             }

             if (userAttempt == pin) {
                pinCorrect = true; 
                break;
             } else {
                cout << "Wrong Pin, Remmaing Attempts(" << 3-k << "/3)" << endl;
                k++;
             }
            }

            if (pinCorrect) {
                cout << "Your Balance: " << balance << endl;
                break;
            } else {
               cout << "Access Denied" << endl;
               break;
            }
          }

            case 4: { 

             int l = 1;
             while(l <= 3) {
             cout << "Please Enter Your Pin: ";
             cin >> userAttempt;

             if (l == 3){
               break;
             }

             if (userAttempt == pin) {
                pinCorrect = true; 
                break;
             } else {
                cout << "Wrong Pin, Remmaing Attempts(" << 3-l << "/3)" << endl;
                l++;
             } 
             }

             if (pinCorrect) { 
                cout << "Enter Your New Pin: ";
                cin >> newPin;

                cout << "--------------------" << endl;
                cout << "Your Pin Is Updated" << endl;
                cout << "--------------------" << endl;
                break;

            } else {
               cout << "Access Denied" << endl;
               break;
            }
           }    


        }

    }

   return 0;

}