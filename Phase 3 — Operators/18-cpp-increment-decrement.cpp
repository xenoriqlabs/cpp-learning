#include <iostream>
using namespace std;

int main()
{

    int number = 10;

    // ========================================
    // 1. Increment (++)
    // ========================================

    number++;

    cout << "After number++: " << number << endl;

    // ========================================
    // 2. Decrement (--)
    // ========================================

    number--;

    cout << "After number--: " << number << endl;

    // ========================================
    // 3. Prefix Increment (++x)
    // ========================================

    int a = 10;

    cout << "Prefix Increment: " << ++a << endl;
    cout << "Value of a: " << a << endl;

    // ========================================
    // 4. Postfix Increment (x++)
    // ========================================

    int b = 10;

    cout << "Postfix Increment: " << b++ << endl;
    cout << "Value of b: " << b << endl;

    // ========================================
    // 5. Prefix Decrement (--x)
    // ========================================

    int c = 10;

    cout << "Prefix Decrement: " << --c << endl;
    cout << "Value of c: " << c << endl;

    // ========================================
    // 6. Postfix Decrement (x--)
    // ========================================

    int d = 10;

    cout << "Postfix Decrement: " << d-- << endl;
    cout << "Value of d: " << d << endl;

    return 0;
}