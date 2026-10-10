#include <iostream>
using namespace std;

int main()
{

    // ========================================
    // 1. SOLID SQUARE PATTERN
    // ========================================

    cout << "1. Solid Square Pattern" << endl;

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // ========================================
    // 2. RIGHT-ANGLED TRIANGLE
    // ========================================

    cout << "\n2. Right-Angled Triangle" << endl;

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // ========================================
    // 3. INVERTED RIGHT-ANGLED TRIANGLE
    // ========================================

    cout << "\n3. Inverted Triangle" << endl;

    for (int row = 6; row >= 1; row--)
    {
        for (int col = 1; col < row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // ========================================
    // 4. RIGHT-ALIGNED TRIANGLE
    // ========================================

    cout << "\n4. Right-Aligned Triangle" << endl;

    for (int row = 1; row <= 5; row++)
    {

        // Print spaces before stars
        for (int space = 1; space <= 5 - row; space++)
        {
            cout << "  ";
        }

        // Print stars
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}