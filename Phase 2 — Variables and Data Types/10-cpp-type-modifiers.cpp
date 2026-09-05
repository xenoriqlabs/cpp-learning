#include <iostream>
using namespace std;

int main()
{

    // ==========================================
    // C++ TYPE MODIFIERS
    // ==========================================
    // short
    // long
    // signed
    // unsigned

    // ------------------------------------------
    // 1. short
    // ------------------------------------------
    short age = 25;

    cout << "short age: " << age << endl;

    // ------------------------------------------
    // 2. long
    // ------------------------------------------
    long population = 250000000;

    cout << "long population: " << population << endl;

    // ------------------------------------------
    // 3. signed
    // ------------------------------------------
    // signed can store both negative and positive values.

    signed int temperature = -10;

    cout << "signed temperature: " << temperature << endl;

    // ------------------------------------------
    // 4. unsigned
    // ------------------------------------------
    // unsigned can store only zero and positive values.

    unsigned int students = 500;

    cout << "unsigned students: " << students << endl;

    // ------------------------------------------
    // Combining Modifiers
    // ------------------------------------------

    short int smallNumber = 100;

    long int largeNumber = 1000000;

    signed int balance = -500;

    unsigned int score = 1000;

    cout << "\nCombined Examples:" << endl;

    cout << "short int: " << smallNumber << endl;
    cout << "long int: " << largeNumber << endl;
    cout << "signed int: " << balance << endl;
    cout << "unsigned int: " << score << endl;

    // ------------------------------------------
    // Checking Size
    // ------------------------------------------

    cout << "\nSize of Data Types:" << endl;

    cout << "short: " << sizeof(short) << "bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;

    return 0;
}