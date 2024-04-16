#include <iostream>
using namespace std;

int main() {
    char op;
    int a, b;
    cout << "Welcome to the C++ calculator!!!" << endl;
    cout << "Enter 1st number: ";
    cin >> a ;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter 2nd number: ";
    cin >> b;

    switch (op) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;

        case '-':
            cout << "Result: " << a - b << endl;
            break;

        case '*':
            cout << "Result: " << a * b << endl;
            break;

        case '/':
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;

        default:
            cout << "Error! Invalid operator." << endl;
            break;
    }

    return 0;
}
