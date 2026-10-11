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

    return 0;
}