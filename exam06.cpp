#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j >= 1; j--) {
            // Condition for the middle character
            if (i >= 3 && j == 3) {
                cout << "@ ";
            } else {
                // Calculate the character to print
                char ch = 'A' + j - 1;
                cout << ch << " ";
            }
        }
        cout << endl;
    }

    return 0;
}