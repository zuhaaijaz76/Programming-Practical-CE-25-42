#include <iostream>
using namespace std;

int main() {
    float percentage;

    cout << "Enter the percentage of the student: ";
    cin >> percentage;

    // Using relational and logical operators
    if (percentage >= 90 && percentage <= 100) {
        cout << "Grade: A+" << endl;
    }
    else if (percentage >= 80 && percentage < 90) {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 70 && percentage < 80) {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 60 && percentage < 70) {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 50 && percentage < 60) {
        cout << "Grade: D" << endl;
    }
    else if (percentage >= 40 && percentage < 50) {
        cout << "Grade: E" << endl;
    }
    else if (percentage >= 0 && percentage < 40) {
        cout << "Grade: F (Fail)" << endl;
    }
    else {
        cout << "Invalid percentage entered!" << endl;
    }

    return 0;
}
