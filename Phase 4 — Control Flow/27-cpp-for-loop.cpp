
#include <iostream>
using namespace std;

int main() {

    // Example 1: Print numbers from 1 to 5
    cout << "Example 1: Numbers from 1 to 5" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    // Example 2: Print a message 3 times
    cout << "\nExample 2: Repeating a Message" << endl;

    for (int i = 1; i <= 3; i++) {
        cout << "Hello, Xenoriq Labs!" << endl;
    }

    // Example 3: Print even numbers from 2 to 10
    cout << "\nExample 3: Even Numbers" << endl;

    for (int i = 2; i <= 10; i += 2) {
        cout << i << endl;
    }

    // Example 4: Calculate the sum from 1 to 5
    cout << "\nExample 4: Sum of Numbers" << endl;

    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        sum += i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}