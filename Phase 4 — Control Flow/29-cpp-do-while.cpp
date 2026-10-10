#include <iostream>
using namespace std;

int main()
{

    // Example 1: Print numbers from 1 to 5
    cout << "Example 1: Numbers from 1 to 5" << endl;

    int i = 0;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= 5);

    // Example 2: Repeat a message 3 times
    cout << "\nExample 2: Repeating a Message" << endl;

    int count = 1;

    do
    {
        cout << "Hello, Xenoriq Labs!" << endl;
        count++;
    } while (count <= 3);

    // Example 3: Execute at least once
    cout << "\nExample 3: Execute at Least Once" << endl;

    int number = 10;

    do
    {
        cout << "This message execute once." << endl;
        number++;
    } while (number < 5);

    // Example 4: Calculate the sum from 1 to 5
    cout << "\nExample 4: Sum of Numbers" << endl;

    int n = 1;
    int sum = 0;

    do
    {
        sum += n;
        n++;
    } while (n <= 5);

    cout << "Sum = " << sum << endl;

    return 0;
}