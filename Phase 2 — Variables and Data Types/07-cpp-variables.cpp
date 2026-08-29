// A variable is a named memory location used to store data 
// that can be changed during program execution.

// For example:

int age = 22;

// ============================
// 1. Variable Declaration
// ============================

// Declaration means telling C++ that a variable exists and specifying its data type.

/*
#include <iostream>
using namespace std;

int main()
{
    int age;
    double salary;
    char grade;
    string name;

    return 0;
}
*/

// ===========================
// 2. Initialization
// ===========================

// Initialization means giving a variable its first value when it is created.

/*
#include <iostream>
using namespace std;

int main()
{
    int age = 22;
    double salary = 50000.50;
    char grade = 'A';
    string name = "Saif";

    cout << "Your age is: " << age << endl;
    cout << "Your salary is: " << salary << endl;
    cout << "Your grade is: " << grade << endl;
    cout << "Your name is " << name << endl;

    return 0;
}
*/

// Declaration + Initialization

int Age = 22;

// ========================
// 3. Assignment
// ========================

// Assignment means giving a new value to an already existing variable.

/*
#include <iostream>
using namespace std;

int main()
{
    int age = 22;

    cout << "Your age is: " << age << endl;

    age = 45;

    cout << "Your updated age is: " << age << endl;

    return 0;
}
*/

// Important difference

/*
int age = 22;  // Initialization
age = 25;      // Assignment

Initialization happens when the variable is created.

Assignment can happen later.
*/

// ===========================
// 4. Naming Rules
// ===========================

// Rule 1: Start with a letter or underscore

int age;
int studentName;
int _score;

// Rule 2: Numbers are allowed after the first character

int age2;
int student1;
int marks2026;

// Rule 3: No spaces

// int student age;   // ❌
// int studentAge;    // ✅

// Rule 4: Don't use special characters

// int student-name;  // ❌
// int student@name;  // ❌

// int studentName;   // ✅

// Rule 5: C++ is case-sensitive

// These are different variables:

int age = 20;
int Age = 25;
int AGE = 30;

// Rule 6: Don't use C++ keywords

// int class;     // ❌
// int return;    // ❌
// int if;        // ❌
// int int;       // ❌

// ===========================
// 5. Multiple Variables
// ===========================

// You can declare multiple variables in a single statement.

int age = 22, marks = 90, score = 85;