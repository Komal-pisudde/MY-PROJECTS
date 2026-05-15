#include <iostream>
#include <cmath>   // for scientific functions
using namespace std;

// Simple Calculator Class
class SimpleCalculator {
public:
    void performOperations(double a, double b) {
        cout << "Simple Calculator Results:" << endl;
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division: Not possible (divide by zero)" << endl;
        cout << endl;
    }
};

// Scientific Calculator Class
class ScientificCalculator {
public:
    void performScientific(double a, double b) {
        cout << "Scientific Calculator Results:" << endl;
        cout << "Power (a^b): " << pow(a, b) << endl;
        cout << "Square root of a: " << sqrt(a) << endl;
        cout << "Square root of b: " << sqrt(b) << endl;
        cout << "Logarithm of a: " << log(a) << endl;
        cout << "Logarithm of b: " << log(b) << endl;
        cout << endl;
    }
};

// Hybrid Calculator that inherits both
class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
public:
    void display(double a, double b) {
        performOperations(a, b);
        performScientific(a, b);
    }
};

int main() {
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    HybridCalculator calc;
    calc.display(x, y);

    return 0;
}
    