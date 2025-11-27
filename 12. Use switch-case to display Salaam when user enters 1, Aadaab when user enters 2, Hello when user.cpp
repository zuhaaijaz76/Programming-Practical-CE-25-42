#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter a number (1, 2, or 3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Salaam" << endl;
            break;
        case 2:
            cout << "Aadaab" << endl;
            break;
        case 3:
            cout << "Hello" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
