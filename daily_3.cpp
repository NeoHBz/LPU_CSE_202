#include <iostream>

using namespace std;

int sumOfNaturalNumbers(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    return sum;
}

void q1() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = sumOfNaturalNumbers(num);
    cout << "The sum of the first " << num << " natural numbers is: " << sum << endl;
}

int recursiveFactorial(int num) {
    if (num == 0) {
        return 1;
    }

    return num * recursiveFactorial(num - 1);
}

void q2() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int fact = recursiveFactorial(num);
    cout << "The factorial of " << num << " is: " << fact << endl;
}

void multiplicationTable(int num) {
    cout << "Multiplication table of " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

void q3() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    multiplicationTable(num);
}

int main() {
    q1();
    q2();
    q3();
    return 0;
}