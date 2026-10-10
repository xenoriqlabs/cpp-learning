
#include <iostream>
using namespace std;

int main() {

    // Example 1: Skip the number 5
    cout << "Example 1: Skip Number 5" << endl;

    for (int i = 1; i <= 10; i++) {

        if (i == 5) {
            continue;
        }

        cout << i << " ";
    }

    cout << endl;

    // Example 2: Print only odd numbers
    cout << "\nExample 2: Odd Numbers" << endl;

    for (int i = 1; i <= 10; i++) {

        if (i % 2 == 0) {
            continue;
        }

        cout << i << " ";
    }

    cout << endl;

    // Example 3: Skip a value in a while loop
    cout << "\nExample 3: While Loop" << endl;

    int number = 0;

    while (number < 5) {
        number++;

        if (number == 3) {
            continue;
        }

        cout << number << " ";
    }

    cout << endl;

    // Example 4: Skip multiples of 3
    cout << "\nExample 4: Skip Multiples of 3" << endl;

    for (int i = 1; i <= 15; i++) {

        if (i % 3 == 0) {
            continue;
        }

        cout << i << " ";
    }

    cout << endl;

    return 0;
}