#include <iostream>

using namespace std;

void concat() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    cout << "Concatenated string: " << str1 << str2 << endl;
}

float gradeAvg() {
    int sumOfGrades = 0;
    for (int i = 0; i < 5; i++)
    {
        int grade;
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grade;
        sumOfGrades += grade;
    }
    return sumOfGrades / 5;
}

void square() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The square of " << num << " is: " << num * num << endl;
}

int main() {
    concat();
    float avg = gradeAvg();
    cout << "The average grade is: " << avg << endl;
    square();
    return 0;
}