#include <iostream>
using namespace std;

int main() {
    int num, n;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter limit: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
