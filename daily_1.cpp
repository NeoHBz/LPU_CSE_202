#include <iostream>

using namespace std;

string concat() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    return str1 + str2;
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

int square(int num) {
    return num * num;
}

int main() {
    string combined = concat();
    cout << "Concatenated string: " << combined << endl;
    float avg = gradeAvg();
    cout << "The average grade is: " << avg << endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sq = square(num);
    cout << "The square of " << num << " is: " << num * num << endl;
    return 0;
}
