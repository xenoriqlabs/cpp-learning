// Operator precedence determines which operator is evaluated first when an expression contains multiple operators.

// Associativity determines the direction in which operators of the same precedence are evaluated.

// Parentheses () can be used to explicitly control the order of evaluation.

#include <iostream>

using namespace std;

int main() {

    // ========================================
    // 1. Precedence
    // ========================================

    int result1 = 10 + 5 * 2;

    cout << "10 + 5 * 2 = "
         << result1 << endl;


    // ========================================
    // 2. Parentheses Change Precedence
    // ========================================

    int result2 = (10 + 5) * 2;

    cout << "(10 + 5) * 2 = "
         << result2 << endl;


    // ========================================
    // 3. Multiplication, Division and Modulus
    // ========================================

    int result3 = 20 + 10 / 2;

    cout << "20 + 10 / 2 = "
         << result3 << endl;


    // ========================================
    // 4. Associativity
    // ========================================

    int result4 = 20 / 5 * 2;

    cout << "20 / 5 * 2 = "
         << result4 << endl;


    // ========================================
    // 5. Left-to-Right Associativity
    // ========================================

    int result5 = 20 - 5 + 2;

    cout << "20 - 5 + 2 = "
         << result5 << endl;


    // ========================================
    // 6. Comparison Precedence
    // ========================================

    int age = 20;

    bool result6 = age >= 18 && age <= 60;

    cout << "\nAge between 18 and 60: "
         << result6 << endl;


    // ========================================
    // 7. Parentheses with Conditions
    // ========================================

    bool result7 =
        (age >= 18) && (age <= 60);

    cout << "\nWith parentheses: "
         << result7 << endl;


    // ========================================
    // 8. Complex Expression
    // ========================================

    int result8 = (10 + 5) * (20 - 10);

    cout << "\n(10 + 5) * (20 - 10) = "
         << result8 << endl;


    return 0;
}