#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {           // Loop for rows
        for (int j = 0; j < i; j++) {        // Loop for printing numbers in each row
            cout << 41 + j << " ";
        }
        cout << endl;
    }
    return 0;
}