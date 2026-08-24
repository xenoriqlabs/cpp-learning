#include <iostream>
using namespace std;

int main()
{
    // 1. cout — Output

    cout << "Hello World!\n";

    // 2. cin — Input

    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age is " << age << ".\n";

    // 3. cerr (display error messages)

    cerr << "This is an error message.\n";

    // 4. clog — Log Output (generally logging/debugging information)

    clog << "Program is loading...\n";

    // 5. endl — New Line + Flush

    cout << "Hello" << endl;
    cout << "World" << endl;

    // 6. \n — New Line
    
    cout << "Line 1\n";
    cout << "Line 2\n";
    cout << "Line 3\n";
}