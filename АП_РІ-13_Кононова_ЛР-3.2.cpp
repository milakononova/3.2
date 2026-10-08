

#include <iostream>
using namespace std;

int main() {
    double a, b, c, x;
    double F1 = 0, F2 = 0;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "Enter x: ";
    cin >> x;

    bool first = (x < 3 && b != 0);
    bool second = (x > 3 && b == 0);

    if (second && x == c) {
        cout << "Error: division by zero!" << endl;
        return 1;
    }

    if (!first && !second && c == 0) {
        cout << "Error: division by zero!" << endl;
        return 1;
    }

    // Method 1: short form
    if (first)
        F1 = a * x * x - b * x + c;

    if (second)
        F1 = (x - a) / (x - c);

    if (!first && !second)
        F1 = x / c;

    // Method 2: full form
    if (first) {
        F2 = a * x * x - b * x + c;
    }
    else if (second) {
        F2 = (x - a) / (x - c);
    }
    else {
        F2 = x / c;
    }

    cout << "1) F = " << F1 << endl;
    cout << "2) F = " << F2 << endl;

    return 0;
}

