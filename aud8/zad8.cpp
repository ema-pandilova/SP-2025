//
// Created by ema on 23.11.25.
//
#include <iostream>
using namespace std;

// Од стандарден влез се читаат едноцифрени броеви, се додека не се прочита нешто што не е број.
// Да се испечати на екран статистика колку пати се јавува секоја цифра меѓу прочитаните броеви.

int main() {

    int digits [10] = {0};
    int number;

    while(cin>>number) {
        digits[number]++;
    }

    for(int i = 0; i < 10; i++) {
        cout<<i<<"->"<<digits[i]<<endl;
    }

    return 0;
}