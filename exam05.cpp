#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows

    for (int i = 1; i <= n; i++) {
        // Print ascending numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print spaces: The space count decreases as i increases
        // Total width is fixed, so calculate spaces accordingly
        int spaces = (n - i) * 4; // Adjust number of spaces
        for (int s = 1; s <= spaces; s++) {
            cout << " ";
        }

        // Print descending numbers from 5 down to (5 - i + 1)
        for (int k = n; k >= n - i + 1; k--) {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}