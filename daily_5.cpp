#include <iostream>
#include <string>

using namespace std;

void q1() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
}

string reverseString(string str) {
    string reverse = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reverse += str[i];
    }

    return reverse;
}

void q2() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reverse = reverseString(str);
    cout << "Reversed string: " << reverse << endl;
}

void count(string str) {
    int vowels = 0, consonants = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

void q3() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    count(str);
}

int main() {
    q1();
    q2();
    q3();
    return 0;
}