//
// Created by ema on 13.10.25.
//
//Да се напише програма која чита голема буква од стандарден влез и ја печати истата како мала буква. - Напомена: Секој знак се претставува со ASCII број.

#include <iostream>
using namespace std;

int main() {
    char c;
    cin>>c;
    // c = c+32;
    cout<< char( c+('a'-'A'));
    // cout<<c;
    return 0;
}