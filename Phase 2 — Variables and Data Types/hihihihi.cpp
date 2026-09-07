#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // C++ TYPE CONVERSION
    // ==========================================

    // 1. Implicit Conversion
    // 2. Explicit Conversion
    // 3. C-style Casting
    // 4. static_cast


    // ==========================================
    // 1. IMPLICIT CONVERSION
    // ==========================================
    // C++ automatically converts the data type.

    int number = 10;
    double decimalNumber = number;

    cout << "1. Implicit Conversion" << endl;
    cout << "int: " << number << endl;
    cout << "double: " << decimalNumber << endl;


    // ==========================================
    // 2. EXPLICIT CONVERSION
    // ==========================================
    // Programmer manually converts the type.

    double price = 99.99;
    int wholePrice = static_cast<int>(price);

    cout << "\n2. Explicit Conversion" << endl;
    cout << "Original: " << price << endl;
    cout << "Converted: " << wholePrice << endl;


    // ==========================================
    // 3. C-STYLE CASTING
    // ==========================================
    // Old-style C/C++ casting syntax.

    double temperature = 36.8;
    int integerTemperature = (int)temperature;

    cout << "\n3. C-style Casting" << endl;
    cout << "Original: " << temperature << endl;
    cout << "Converted: " << integerTemperature << endl;


    // ==========================================
    // 4. static_cast
    // ==========================================
    // Modern C++ casting syntax.

    double marks = 87.75;
    int integerMarks = static_cast<int>(marks);

    cout << "\n4. static_cast" << endl;
    cout << "Original: " << marks << endl;
    cout << "Converted: " << integerMarks << endl;


    // ==========================================
    // IMPORTANT: INTEGER DIVISION
    // ==========================================

    int a = 10;
    int b = 3;

    double result1 = a / b;

    double result2 = static_cast<double>(a) / b;

    cout << "\nInteger Division" << endl;
    cout << "Without casting: " << result1 << endl;
    cout << "With static_cast: " << result2 << endl;


    return 0;
}