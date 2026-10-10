#include <iostream>
using namespace std;

int main(){

    // Example 1: Student exam eligibility
    bool isRegister = true;
    bool feePaid = true;

    if (isRegister){
        cout << "Student registration verified." << endl;

        if (feePaid){
            cout << "Exam fee verified." << endl;
            cout << "You are eligible to take the exam." << endl;
        }
    }

    
}