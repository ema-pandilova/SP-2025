//
// Created by ema on 2.11.25.
//

#include <iostream>
using namespace std;

// Да се напише програма која што ќе ги отпечати сите четирицифрени природни броеви кои се деливи со збирот на двата броја составени од првите две цифри
// и од последните две цифри на четирицифрениот број. На крајот треба да отпечати и колку вакви броеви се пронајдени.
// 3417 е делив со 34 + 17

int sumOfTwoParts(int n) {
    return n/100 + n%100;
}
int main() {
    int counter = 0;
    for(int i=1000; i<10000; i++) {
        if(i%sumOfTwoParts(i)==0) {
            cout << i << endl;
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}