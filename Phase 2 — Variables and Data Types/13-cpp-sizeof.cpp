#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // C++ sizeof OPERATOR
    // ==========================================

    // sizeof tells us how many bytes
    // a data type or variable uses.

    // ==========================================
    // 1. sizeof WITH DATA TYPES
    // ==========================================

    cout << "char: " << sizeof(char) << "byte(s)" << endl;
    cout << "short: " << sizeof(short) << " byte(s)" << endl;
    cout << "int: " << sizeof(int) << " byte(s)" << endl;
    cout << "long: " << sizeof(long) << " byte(s)" << endl;
    cout << "long long: " << sizeof(long long) << "byte(s)" << endl;

    cout << "float: " << sizeof(float) << "byte(s)" << endl;
    cout << "double: " << sizeof(double) << " byte(s)" << endl;
    cout << "long double: " << sizeof(long double) << " byte(s)" << endl;

    cout << "bool: " << sizeof(bool) << " byte(s)" << endl;

    // ==========================================
    // 2. sizeof WITH VARIABLES
    // ==========================================

    int age = 25;
    double price = 99.99;
    char grade = 'A';
    bool isStudent = true;

    cout << "\nMEMORY SIZE OF VARIABLES" << endl;

    cout << "age: " << sizeof(age) << " byte(s)" << endl;
    cout << "price: " << sizeof(price) << " byte(s)" << endl;
    cout << "grade: " << sizeof(grade) << " byte(s)" << endl;
    cout << "isStudent: " << sizeof(isStudent) << " byte(s)" << endl;

    // ==========================================
    // 3. sizeof WITH EXPRESSIONS
    // ==========================================

    cout << "\nSIZE OF EXPRESSIONS" << endl;

    cout << "sizeof(10): " << sizeof(10) << " byte(s)" << endl;
    cout << "sizeof(10.5): " << sizeof(10.5) << " byte(s)" << endl;
    cout << "sizeof('A'): " << sizeof('A') << " byte(s)" << endl;

    // ==========================================
    // 4. TYPE MODIFIERS + sizeof
    // ==========================================

    cout << "\nTYPE MODIFIERS" << endl;

    cout << "short int: " << sizeof(short int) << " byte(s)" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " byte(s)" << endl;
    cout << "long int: " << sizeof(long int) << " byte(s)" << endl;
    cout << "long long int: " << sizeof(long long int) << " byte(s)" << endl;

    return 0;
}