#include <iostream>
using namespace std;

int main() {

    // Example 1: Basic switch statement
    int choice = 2;

    cout << "Example 1: Website Menu" << endl;

    switch (choice) {
        case 1:
            cout << "Welcome to Home." << endl;
            break;

        case 2:
            cout << "Welcome to Services." << endl;
            break;

        case 3:
            cout << "Welcome to Contact." << endl;
            break;

        default:
            cout << "Invalid menu choice." << endl;
    }

    // Example 2: Days of the week
    int day = 5;

    cout << "\nExample 2: Day of the Week" << endl;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;

        case 6:
            cout << "Saturday" << endl;
            break;

        case 7:
            cout << "Sunday" << endl;
            break;

        default:
            cout << "Invalid day number." << endl;
    }

    // Example 3: Simple calculator
    int num1 = 20;
    int num2 = 10;
    char op = '+';

    cout << "\nExample 3: Simple Calculator" << endl;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            }
            else {
                cout << "Cannot divide by zero." << endl;
            }
            break;

        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}