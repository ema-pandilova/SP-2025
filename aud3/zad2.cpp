//
// Created by ema on 13.10.25.
//

#include <iostream>
using namespace std;

// Да се напише програма што проверува дали дадена година што се вчитува од тастатура е престапна или не и на екран печати соодветна порака.

int main() {
    int year;
    cin >> year;
    if ((year % 4 == 0 && year %100 !=0) || year % 400 == 0) {
      cout << year << " is a leap year" << endl;
    }
    else {
        cout << year<< " is not a leap year" << endl;
    }

    // со тернарен оператор
    // cout<<(((year % 4 == 0 && year %100 !=0) || year % 400 == 0)?"leap year":"not a leap year");
    return 0;
}