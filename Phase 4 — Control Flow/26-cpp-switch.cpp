#include <iostream>
using namespace std;

int main(){

    // Example 1: Basic switch statement
    int choice = 2;

    cout << "Example 1: Website Menue" << endl;

    switch (choice){
        case 1:
            cout << 'Welcome to Home.' << endl;
            break;

        case 2:
            cout << "Welcome to Services." << endl;
    }
}