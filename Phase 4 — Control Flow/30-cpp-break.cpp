#include <iostream>
using namespace std;

int main()
{

    // Example 1: Stop a for loop at 5
    cout << "Example 1: For Loop" << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }

        cout << i << endl;
    }

    cout << endl;

    // Example 2: Stop a while loop at 4
    cout << "\nExample 2: While Loop" << endl;

    int number = 1;

    while (number <= 10)
    {
        if (number == 4)
        {
            break;
        }

        cout << number << " ";
        number++;
    }

    // Example 3: Stop a do-while loop at 3
    cout << "\nExample 3: Do-While Loop" << endl;

    int count = 1;

    do
    {
        if (count == 3)
        {
            break;
        }

        cout << count << " ";
        count++;
    } while (count <= 10);

    cout << endl;

    // Example 4: Search for a number
    cout << "\nExample 4: Number Search" << endl;

    int target = 7;

    for (int i = 1; i <= 10; i++){
        if (i == target){
            cout << "Number found: " << i << endl;
            break;
        }
    }

    cout << "Search completed." << endl;

    return 0;
}