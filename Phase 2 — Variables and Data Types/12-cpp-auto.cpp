#include <iostream>
using namespace std;

int main()
{

    // ==========================================
    // C++ AUTO & TYPE DEDUCTION
    // ==========================================

    // ==========================================
    // 1. auto
    // ==========================================
    // C++ automatically determines the data type.

    auto age = 25;
    auto price = 99.99;
    auto name = string("Xenoriq Labs");
    auto isStudent = true;

    cout << "AUTO VARIABLES" << endl;

    cout << "age: " << age << endl;
    cout << "price: " << price << endl;
    cout << "name: " << name << endl;
    cout << "isStudent: " << isStudent << endl;

    // ==========================================
    // 2. TYPE DEDUCTION
    // ==========================================
    // The compiler looks at the value and
    // deduces its type.

    auto number = 100;   // int
    auto decimal = 10.5; // double
    auto letter = 'A';   // char
    auto status = true;  // bool

    cout << "\nTYPE DEDUCTION" << endl;

    cout << "number: " << number << endl;
    cout << "decimal: " << decimal << endl;
    cout << "letter: " << letter << endl;
    cout << "status: " << status << endl;

    // ==========================================
    // CHECKING THE DEDUCED TYPE
    // ==========================================

    cout << "\nDATA TYPES" << endl;

    cout << "number: " << typeid(number).name() << endl;
    cout << "decimal: " << typeid(decimal).name() << endl;
    cout << "letter: " << typeid(letter).name() << endl;
    cout << "status: " << typeid(status).name() << endl;

    // ==========================================
    // 3. auto WITH EXPRESSIONS
    // ==========================================

    auto a = 10;
    auto b = 20;

    auto sum = a + b;
    auto multiplication = a * b;

    cout << "\nAUTO WITH EXPRESSIONS" << endl;

    cout << "sum: " << sum << endl;
    cout << "multiplication: " << multiplication << endl;

    // ==========================================
    // 4. auto WITH CALCULATIONS
    // ==========================================

    auto x = 10;
    auto y = 3.5;

    auto result = x + y;

    cout << "\nAUTO WITH CALCULATION" << endl;

    cout << "result: " << result << endl;
    cout << "result type: " << typeid(result).name() << endl;

    return 0;
}