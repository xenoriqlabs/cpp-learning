#include <iostream>
using namespace std;

int main()
{

    int age = 20;
    int marks = 75;

    // ========================================
    // 1. && Logical AND
    // ========================================

    bool condition1 = (age >= 18);
    bool condition2 = (marks >= 50);

    cout << boolalpha;

    cout << "Age >= 18: " << condition1 << endl;
    cout << "Marks >= 50: " << condition2 << endl;

    cout << "AND (&&): "
         << (condition1 && condition2) << endl;

    // ========================================
    // 2. || Logical OR
    // ========================================

    bool hasEmail = true;
    bool hasPhone = false;

    cout << "Has Email: " << hasEmail << endl;
    cout << "Has Phone: " << hasPhone << endl;

    cout << "OR (||): "
         << (hasEmail || hasPhone) << endl;

    // ========================================
    // 3. ! Logical NOT
    // ========================================

    bool isLoggedIn = true;

    cout << "Is Logged In: "
         << isLoggedIn << endl;

    cout << "NOT (!): "
         << (!isLoggedIn) << endl;

    return 0;
}