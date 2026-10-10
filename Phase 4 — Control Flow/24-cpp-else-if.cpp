
#include <iostream>
using namespace std;

int main() {

    // Example 1: Check student grades
    int marks = 85;

    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Result: Fail" << endl;
    }

    // Example 2: Check whether a number is positive,
    // negative, or zero
    int number = -5;

    if (number > 0) {
        cout << "The number is positive." << endl;
    }
    else if (number < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    // Example 3: Check temperature
    int temperature = 30;

    if (temperature >= 35) {
        cout << "The weather is hot." << endl;
    }
    else if (temperature >= 20) {
        cout << "The weather is pleasant." << endl;
    }
    else if (temperature >= 10) {
        cout << "The weather is cool." << endl;
    }
    else {
        cout << "The weather is cold." << endl;
    }

    return 0;
}