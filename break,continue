#include <iostream>
using namespace std;

int main() 
{
    cout << "Demonstration of break, continue and pass equivalent\n\n";

    for(int i = 1; i <= 10; i++)
    {
        // PASS equivalent (do nothing for i == 2)
        if(i == 2)
        {
            ;   // empty statement (like pass in Python)
        }

        // CONTINUE example (skip number 5)
        if(i == 5)
        {
            cout << "Continue executed at i = " << i << endl;
            continue;   // skips remaining code for this iteration
        }

        // BREAK example (stop loop at 8)
        if(i == 8)
        {
            cout << "Break executed at i = " << i << endl;
            break;   // terminates the loop
        }

        cout << "Value of i: " << i << endl;
    }

    return 0;
}
