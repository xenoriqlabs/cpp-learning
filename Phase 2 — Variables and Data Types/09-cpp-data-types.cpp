#include <iostream>
#include <string>
using namespace std;

int main() {

    // ========================================
    // 1. int
    // Whole numbers
    // ========================================

    int age = 22;
    int marks = 90;

    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;


    // ========================================
    // 2. float
    // Decimal numbers
    // ========================================

    float height = 5.8f;
    float temperature = 36.5f;  // The f explicitly tells C++ that the number is a float literal.

    cout << "Height: " << height << endl;
    cout << "Temperature: " << temperature << endl;


    // ========================================
    // 3. double
    // More precise decimal numbers
    // ========================================

    double price = 999.99;
    double pi = 3.141592653589793;

    cout << "Price: " << price << endl;
    cout << "PI: " << pi << endl;


    // ========================================
    // 4. char
    // Single character
    // ========================================

    char grade = 'A';
    char section = 'B';

    cout << "Grade: " << grade << endl;
    cout << "Section: " << section << endl;


    // ========================================
    // 5. bool
    // true / false
    // ========================================

    bool isStudent = true;
    bool hasLicense = false;

    cout << boolalpha;

    cout << "Is Student: " << isStudent << endl;
    cout << "Has License: " << hasLicense << endl;


    // ========================================
    // 6. void
    // No return value
    // ========================================

    // void is mainly used with functions.
    // Example:
    //
    // void sayHello() {
    //     cout << "Hello!";
    // }


    return 0;
}