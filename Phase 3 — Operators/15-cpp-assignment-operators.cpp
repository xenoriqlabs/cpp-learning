#include <iostream>
using namespace std;

int main()
{

    // ========================================
    // 1. = Assignment Operator
    // ========================================

    int number = 10;

    cout << "Initial value: " << number << endl;

    // ========================================
    // 2. += Add and Assign
    // ========================================

    number += 5; // Same as: number = number + 5

    cout << "After += 5: " << number << endl;

    // ========================================
    // 3. -= Subtract and Assign
    // ========================================

    number -= 3; // Same as: number = number - 3

    cout << "After -= 3: " << number << endl;

    // ========================================
    // 4. *= Multiply and Assign
    // ========================================

    number *= 2; // Same as: number = number * 2

    cout << "After *= 2: " << number << endl;

    // ========================================
    // 5. /= Divide and Assign
    // ========================================

    number /= 4; // Same as: number = number / 4

    cout << "After /= 4: " << number << endl;

    // ========================================
    // 6. %= Modulus and Assign
    // ========================================

    number %= 3; // Same as: number = number % 3

    cout << "After %= 3: " << number << endl;

    // ========================================
    // 7. Practical Example — Shopping Cart
    // ========================================

    int total = 1000;

    // Add another product
    total += 500;

    // Apply discount
    total -= 200;

    // BUy 2 quantities
    total *= 2;

    // Split bill between 2 people
    total /= 2;

    cout << "Final Bill: " << total << endl;

    return 0;
}