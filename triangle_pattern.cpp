#include <iostream>
using namespace std;

int main()
{
    int n, choice;
    cout << "Enter number of rows: ";
    cin >> n;

    cout << "\nTriangle Pattern Menu\n";
    cout << "1. Left Right Angle Triangle\n";
    cout << "2. Inverted Right Angle Triangle\n";
    cout << "3. Right Aligned Triangle\n";
    cout << "4. Pyramid Triangle\n";
    cout << "5. Inverted Pyramid\n";
    cout << "6. Full Diamond\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1: // Left Right Angle
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=i; j++)
                    cout << "* ";
                cout << endl;
            }
            break;

        case 2: // Inverted Right Angle
            for(int i=n; i>=1; i--)
            {
                for(int j=1; j<=i; j++)
                    cout << "* ";
                cout << endl;
            }
            break;

        case 3: // Right Aligned
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n-i; j++)
                    cout << "  ";
                for(int k=1; k<=i; k++)
                    cout << "* ";
                cout << endl;
            }
            break;

        case 4: // Pyramid
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n-i; j++)
                    cout << " ";
                for(int k=1; k<=2*i-1; k++)
                    cout << "*";
                cout << endl;
            }
            break;

        case 5: // Inverted Pyramid
            for(int i=n; i>=1; i--)
            {
                for(int j=1; j<=n-i; j++)
                    cout << " ";
                for(int k=1; k<=2*i-1; k++)
                    cout << "*";
                cout << endl;
            }
            break;

        case 6: // Diamond
            // Upper pyramid
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n-i; j++)
                    cout << " ";
                for(int k=1; k<=2*i-1; k++)
                    cout << "*";
                cout << endl;
            }
            // Lower pyramid
            for(int i=n-1; i>=1; i--)
            {
                for(int j=1; j<=n-i; j++)
                    cout << " ";
                for(int k=1; k<=2*i-1; k++)
                    cout << "*";
                cout << endl;
            }
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
