#include <iostream>
using namespace std;

int main()
{

    // Example 1: Student exam eligibility
    bool isRegister = true;
    bool feePaid = true;

    if (isRegister)
    {
        cout << "Student registration verified." << endl;

        if (feePaid)
        {
            cout << "Exam fee verified." << endl;
            cout << "You are eligible to take the exam." << endl;
        }
    }

    // Example 2: Login system
    string username = "Saif";
    string password = "12345";

    if (username == "Saif")
    {
        cout << "\nUsername is correct." << endl;

        if (password == "12345")
        {
            cout << "Password is correct." << endl;
            cout << "Welcome to Xenoriq Labs!" << endl;
        }
    }

    // Example 3: Check age and marks
    int age = 20;
    int marks = 85;

    if (age >= 18)
    {
        cout << "\nAge requirement satisfied." << endl;

        if (marks >= 50)
        {
            cout << "You passed the exam." << endl;
        }
    }

    return 0;
}