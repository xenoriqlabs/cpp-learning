#include <iostream>
#include <bitset>

using namespace std;

int main()
{

    int a = 5;
    int b = 3;

    cout << boolalpha;

    // Display decimal values
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Display binary values
    cout << "Binary of a: " << bitset<8>(a) << endl;
    cout << "Binary of b: " << bitset<8>(b) << endl;

    // ========================================
    // 1. Bitwise AND (&)
    // ========================================

    int resultAND = a & b;
    cout << "\na & b = " << resultAND << endl;
    cout << "Binary: " << bitset<8>(resultAND) << endl;

    // ========================================
    // 2. Bitwise OR (|)
    // ========================================

    int resultOR = a | b;

    cout << "\na | b = " << resultOR << endl;
    cout << "Binary: " << bitset<8>(resultOR) << endl;

    // ========================================
    // 3. Bitwise XOR (^)
    // ========================================

    int resultXOR = a ^ b;

    cout << "\na ^ b = " << resultOR << endl;
    cout << "Binary: " << bitset<8>(resultXOR) << endl;
}
