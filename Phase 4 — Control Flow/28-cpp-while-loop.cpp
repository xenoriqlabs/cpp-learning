#include <iostream>
using namespace std;

int main()
{

    // Example 1: Print numbers from 1 to 5
    cout << "Example 1: Numbers from 1 to 5" << endl;

    int i = 1;

    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }

    // Example 2: Print a message 3 times
    cout << "\nExample 2: Repeating a Message" << endl;

    int count = 1;

    while (count <= 3)
    {
        cout << "Hello, Xenoriq Labs!" << endl;
        count++;
    }

    // Example 3: Print even numbers from 2 to 10
    cout << "\nExample 3: Even Numbers" << endl;

    int number = 2;

    while (number <= 10)
    {
        cout << number << endl;
        number += 2;
    }

    // Example 4: Calculate the sum from 1 to 5
    cout << "\nExample 4: Sum of Numbers" << endl;

    int n = 1;
    int sum = 0;

    while (n <= 5)
    {
        sum += n;
        n++;
    }

    cout << sum << endl;

    return 0;
    
}