// Learning Loops, through a test program:

#include <iostream>
using namespace std;

int main() {
    int x{5};
    //Explaination: (i am still doubtful but here is what i thnk is happening)
    
    // this basically tells compiler to run the below code 'x' number of times.  
    for(int i = 1; i <= x; i++) {
       
        // this tells compiler to run this loop for 3times.
        // but since we have added this in another loop of 5times, the actuall  total time this loop will run is 3*5 = 15times.
        // for the previous loop, this loop runing 3 times is equivalent of runing this code only 1 time, so it repeats that this 5times, 
        // thus making it 15 times. 
        for(int j = 1; j <= 10; j++) {
            cout << "*";
        }
        
        // after writing this endl, now i understand why loops are usefull.
        // think this way, first loop is limiting the number of colomuns.
        // and the second loop, is limiting how many starts will be there is one colomun.
        cout << endl;


    }


}
