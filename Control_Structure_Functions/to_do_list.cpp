#include <iostream>
#include <string>

using namespace std;

int main() {
    int userInput{};

    cout << "Press 1: See Your To-Do List" << endl;
    cout << "Press 2: Add A Task" << endl;
    cout << "Press 3: Remove a Task" << endl;
    cin >> userInput;
    
    string task1;
    string task2;
    string task3;

    string taskAdd;
    int taskChange{};
    int removeNumber{};

    if (userInput == 1) {
        cout << "---------------------------" << endl;
        cout << "Task 1: " << task1 << endl;
        cout << "Task 2: " << task2 << endl;
        cout << "Task 3: " << task3 << endl;
        cout << "---------------------------" << endl;
    } else if (userInput == 2) {
        cout << "Enter Task To Add: ";
        cin >> taskAdd;
        cout << "Which Task Number You Would Like To Update, Enter the number: ";
        cin >> taskChange;

        if (taskChange == 1) {
            task1 = taskChange;
        } else if (taskChange == 2) {
            task2 = taskChange;
        } else if (taskChange == 3) {
            task3 = taskChange;
        }

        cout << "---------------------------" << endl;
        cout << "Your Task Is Updated" << endl;
        cout << "---------------------------" << endl;
    } else if (userInput == 3) {
        cout << "Which Task you want to remove ? Please Enter Its Number: ";
        cin >> removeNumber;

        if (removeNumber == 1) {
            task1 = "Empty";
        } else if (removeNumber == 2) {
            task2 = "Empty";
        } else if (removeNumber == 3) {
            task3 = "Empty";
        }
    }

    return 0;
}