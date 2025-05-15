#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;
    string op;

    void calculate() {
        if (op == "add")
            cout << "Result: " << a + b << endl;
        else if (op == "subtract")
            cout << "Result: " << a - b << endl;
        else if (op == "multiply")
            cout << "Result: " << a * b << endl;
        else if (op == "divide") {
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Cannot divide by zero" << endl;
        }
        else
            cout << "Invalid operation" << endl;
    }
};

int main() {
    Calculator calc;
    cout << "Enter two numbers: ";
    cin >> calc.a >> calc.b;
    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> calc.op;

    calc.calculate();
    return 0;
}
