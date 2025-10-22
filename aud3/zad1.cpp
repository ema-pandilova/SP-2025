//
// Created by ema on 13.10.25.
//


#include <iostream>
using namespace std;

//Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е мала или голема буква печати 1 или 0, соодветно.
//ПОМОШ: Користете логички и релациски оператори за тестирање на ASCII вредноста на знакот.

// int main() {
//    int m=5, n=10;
//    if (m > n) {
//       ++m;
//       ++n;
//    }
//    cout << "m = " << m << ", n = " << n;
//    return 0;
// }

int main() {
    char c;
    cin >> c;
    bool res; //int res;
    res = (c >= 'a') && (c <= 'z');
    cout << res << endl;
    return 0;
}