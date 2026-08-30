// A constant is a value that cannot be changed after it has been initialized.

// In C++, you mainly use:

// const
// constexpr

#include <iostream>
using namespace std;

constexpr int square(int number)
{
    return number * number;
}

int main()
{
    // ========================================
    // 1. const
    // ========================================

    const int age = 22;

    cout << "Age: " << age << endl;

    // age = 23;    // ❌ Error

    // ========================================
    // 2. Constant Variables
    // ========================================

    const double PI = 3.14159;
    const double TAX_RATE = 0.18;

    cout << "PI: " << PI << endl;
    cout << "Tax Rate: " << TAX_RATE << endl;

    // ========================================
    // 3. constexpr
    // ========================================

    constexpr int DAYS_IN_WEEK = 7;
    constexpr int MONTHS_IN_YEAR = 12;

    cout << "Days in Week: " << DAYS_IN_WEEK << endl;
    cout << "Months in Year: " << MONTHS_IN_YEAR << endl;

    // ========================================
    // 4. Practical Example
    // ========================================

    constexpr int MAX_SCORE = 100;

    int studentScore = 85;

    cout << "Student Score: " << studentScore << endl;
    cout << "Maximum Score: " << MAX_SCORE << endl;

    // MAX_SCORE = 90;  // ❌ Error

    // ========================================
    // 5. constexpr functions
    // ========================================

    constexpr int result = square(5);

    cout << result;

    return 0;
}