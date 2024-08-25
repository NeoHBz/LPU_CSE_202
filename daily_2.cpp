#include <iostream>

using namespace std;

int findLargest(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    } else if (num2 > num1 && num2 > num3) {
        return num2;
    } else {
        return num3;
    }
}

char determineGrade(int score) {
    if (score >= 90 && score <= 100) {
        return 'A';
    } else if (score >= 80 && score <= 89) {
        return 'B';
    } else if (score >= 70 && score <= 79) {
        return 'C';
    } else if (score >= 60 && score <= 69) {
        return 'D';
    } else {
        return 'F';
    }
}

void q2() {
    int score;
    cout << "Enter the score: ";
    cin >> score;

    char grade = determineGrade(score);
    cout << "Grade: " << grade << endl;
}

void q1() {
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    int largest = findLargest(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;
}

string getMonth(int month) {
    switch (month) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            return "Invalid";
    }
}

void q3() {
    int month;
    cout << "Enter a number: ";
    cin >> month;

    string monthName = getMonth(month);
    cout << "The month is: " << monthName << endl;
}

int main() {
    q1();
    q2();
    q3();
    return 0;
}