#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 7; i++) {
        if (i == 1 || i == 4 || i == 7) {
            // Print A A A A A A
            for (int j = 1; j <= 6; j++) {
                cout << "A ";
            }
            cout << endl;
        } else {
            // Print a single A
            cout << "A" << endl;
        }
    }

    return 0;
}