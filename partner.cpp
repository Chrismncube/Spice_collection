#include <iostream>
using namespace std;

int main() {
    int age, height, interests;
    cout << "Enter your age (1-100): ";
    cin >> age;
    cout << "Enter your preferred partner's height (1-200): ";
    cin >> height;
    cout << "Enter your interests (1=sports, 2=books, 3=music): ";
    cin >> interests;

    if (age >= 18) {
        if (height >= 160) {
            if (interests == 1) {
                cout << "You're a great match for a sports enthusiast!";
            } else if (interests == 2) {
                cout << "You're a great match for a bookworm!";
            } else if (interests == 3) {
                cout << "You're a great match for a music lover!";
            } else {
                cout << "Invalid interests entered.";
            }
        } else {
            cout << "Your preferred partner's height is too short.";
        }
    } else {
        cout << "You're too young to be looking for a partner.";
    }
return 0;}
