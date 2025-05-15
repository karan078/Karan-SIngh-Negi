#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,8,9,12,46,76,82,15,20,30};
    int count[10] = {0};

    for (int i = 0; i < 11; i++) {
        for (int j = 1; j <= 9; j++) {
            if (arr[i] % j == 0)
                count[j]++;
        }
    }

    for (int i = 1; i <= 9; i++)
        cout << i << ": " << count[i] << endl;

    return 0;
}
