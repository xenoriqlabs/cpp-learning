#include <iostream>
using namespace std;

int main(){

    // Example 1: Check voting eligibility
    int age = 18;

    if (age >= 18){
        cout << "You are eligible to vote.";
    }

    // Example 2: Check whether a number is positive
    int number = 10;

    if (number > 0) {
        cout << "The number is positive." << endl;
    }

    // Example 3: Check whether a student passed
    int marks = 75;

    if (marks >= 50) {
        cout << "Congratulations! You passed." << endl;
    }

    // Example 4: Check whether a number is even
    int value = 8;
    if (value % 2 == 0){
        cout << "The number is even.";
    }

    // Example 5: Check two conditions together
    int studentAge = 20;
    bool hasID = true;

    if (studentAge >= 18 && hasID){
        cout << "Entry allowed." << endl;
    }

    return 0;

}