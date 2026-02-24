#include <iostream>
using namespace std;

int main()
{
    int num, marks, choice;

    // User input
    cout << "Enter a number: ";
    cin >> num;

    // 1. Simple if statement
    cout << "\n1. Simple if statement:\n";
    if (num > 0)
    {
        cout << "Number is positive" << endl;
    }

    // 2. if-else statement
    cout << "\n2. if-else statement:\n";
    if (num % 2 == 0)
        cout << "Number is even" << endl;
    else
        cout << "Number is odd" << endl;

    // 3. else-if ladder
    cout << "\nEnter your marks: ";
    cin >> marks;

    cout << "\n3. else-if ladder:\n";
    if (marks >= 90)
        cout << "Grade: A" << endl;
    else if (marks >= 75)
        cout << "Grade: B" << endl;
    else if (marks >= 50)
        cout << "Grade: C" << endl;
    else
        cout << "Fail" << endl;

    // 4. Nested if
    cout << "\n4. Nested if:\n";
    if (num > 0)
    {
        if (num > 100)
            cout << "Number is greater than 100" << endl;
        else
            cout << "Number is positive but <= 100" << endl;
    }
    else
    {
        cout << "Number is not positive" << endl;
    }

    // 5. Switch statement
    cout << "\nEnter your choice (1-3): ";
    cin >> choice;

    cout << "\n5. Switch statement:\n";
    switch (choice)
    {
    case 1:
        cout << "You selected Option 1" << endl;
        break;
    case 2:
        cout << "You selected Option 2" << endl;
        break;
    case 3:
        cout << "You selected Option 3" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }


    return 0;
}
