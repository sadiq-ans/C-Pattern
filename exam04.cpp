#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows

    for (int i = 1; i <= n; i++) {
        // print stars first
        for (int j = 1; j <= n - i; j++) {
            cout << "* ";
        }

        // print numbers according to the pattern
        for (int k = 1; k <= i; k++) {
            // The numbers alternate starting with 1 at the rightmost position
            // If we observe, the rightmost number is always 1
            // Then alternate 0 and 1 going left
            // So from left to right of numbers, it's reversed alternating starting from 1 on the right
            // We can calculate the number using (i - k) % 2
            if ((i - k) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}