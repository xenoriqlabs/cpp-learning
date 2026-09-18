#include <iostream>
#include <string>

using namespace std;

int main()
{

    // ========================================
    // 1. Basic Ternary Operator
    // ========================================

    int age = 20;

    string ageStatus = (age >= 18) ? "Adult" : "Minor";

    cout << "Age Status: " << ageStatus << endl;

    // ========================================
    // 2. Check Even or Odd
    // ========================================

    int number = 15;

    string numberType = (number % 2 == 0) ? "Even" : "Odd";

    cout << "Number Type: " << numberType << endl;

    // ========================================
    // 3. Check Pass or Fail
    // ========================================

    int marks = 75;

    string result = (marks >= 40) ? "Passed" : "Failed";

    cout << "Result: " << result << endl;

    // ========================================
    // 4. Find Greater Number
    // ========================================

    int a = 50;
    int b = 30;

    int greater = (a > b) ? a : b;

    cout << "Greater Number: " << greater << endl;

    // ========================================
    // 5. Positive or Negative
    // ========================================

    int value = -10;

    string sign = (value >= 0) ? "Positive" : "Negative";

    cout << "Value is: " << sign << endl;

    return 0;
}