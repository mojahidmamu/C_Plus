#include <iostream>
using namespace std;

int main() {
    int password;

    while (true) {
        cin >> password;

        if (password == 1999) {
            cout << "Correct" << endl;
            break; // Exit the loop and program
        } else {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}
