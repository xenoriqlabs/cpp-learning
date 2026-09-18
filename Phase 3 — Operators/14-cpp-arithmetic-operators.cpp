#include <iostream>
using namespace std;
int main()
{

    // Two numbers
    int num1 = 20;
    int num2 = 6;

    // Addition (+)
    int addition = num1 + num2;

    // Subtraction (-)
    int subtraction = num1 - num2;

    // Multiplication (*)
    int multiplication = num1 * num2;

    // Division (/)
    int division = num1 / num2;

    // Modulus (%)
    int remainder = num1 % num2;

    // Display results
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    cout << "\nArithmetic Operators: " << endl;

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulus: " << remainder << endl;

    return 0;
}