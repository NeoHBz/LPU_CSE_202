#include <iostream>
#include <cmath>

using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex(float r, float i) {
            real = r;
            imag = i;
        }

        Complex operator+(Complex const &obj) {
            return Complex(real + obj.real, imag + obj.imag);
        }

        Complex operator-(Complex const &obj) {
            return Complex(real - obj.real, imag - obj.imag);
        }

        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

void q1() {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    if (b == 0) {
        cout << "Division: Cannot divide by zero" << endl;
    } else {
        cout << "Division: " << (float)a / b << endl;
    }
    cout << "Modulus: " << a % b << endl;
}

void q2() {
    float r1, i1, r2, i2;
    cout << "Enter real part of complex number 1: ";
    cin >> r1;
    cout << "Enter imaginary part of complex number 1: ";
    cin >> i1;
    cout << "Enter real part of complex number 2: ";
    cin >> r2;
    cout << "Enter imaginary part of complex number 2: ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
}

int main() {
    q1();
    q2();
    return 0;
}
