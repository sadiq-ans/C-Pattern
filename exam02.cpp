#include <iostream>
using namespace std;

int main() {
    int num = 25; // starting number

    for (int i = 1; i <= 5; i++) { // row loop
        if (i % 2 != 0) { // if row number is odd (print numbers)
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
                num++; // increment only when printing numbers
            }
        } else { // even row, print stars
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}