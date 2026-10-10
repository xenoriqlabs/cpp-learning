
#include <iostream>
using namespace std;

int main() {

    // Example 1: Check passing marks
    int marks = 75;

    if (marks >= 50) {
        cout << "You passed the exam." << endl;
    }
    else {
        cout << "You failed the exam." << endl;
    }

    // Example 2: Check voting eligibility
    int age = 16;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }

    // Example 3: Check positive or non-positive number
    int number = -5;

    if (number > 0) {
        cout << "The number is positive." << endl;
    }
    else {
        cout << "The number is zero or negative." << endl;
    }

    // Example 4: Check even or odd number
    int value = 7;

    if (value % 2 == 0) {
        cout << "The number is even." << endl;
    }
    else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
