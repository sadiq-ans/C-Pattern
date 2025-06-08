#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int s = 0; s < i; s++) {
            cout << "  "; // two spaces
        }

        // Print j
        for (int j = 0; j< rows - i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
