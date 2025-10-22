//
// Created by ema on 13.10.25.
//

#include <iostream>
using namespace std;

// Да се напише програма со која ќе се отпечати максимумот од два броја чии вредности се читаат од тастатура.

int main() {
    int a,b;
    cin>>a>>b;
    // if(a>=b) {
    //     cout<<a;
    // }
    // else {
    //     cout<<b;
    // }
    cout << (a >= b ? a : b);
    return 0;
}