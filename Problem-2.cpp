#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many odd numbers to print: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << 2 * i + 1 << " ";
    }

    return 0;
}
