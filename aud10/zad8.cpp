//
// Created by ema on 11.12.25.
//
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

// Да се напише програма која за дадена низа од цели броеви (која се внесува од тастатура), ќе го отпечати најмалиот заеднички содржател (НЗС) на нејзините елементи.
// Програмата треба задолжително да содржи рекурзивна функција за пресметување НЗС на два броја.
//
// Пример: За низата 18 12 24 36 6 на екран треба да се отпечати:

int NZS(int m, int n, int divisor) {
    if (m == 1 && n == 1) {
        return 1;
    } else {
        if (m % divisor == 0 || n % divisor == 0) {
            return divisor * NZS(
                       m % divisor == 0 ? m / divisor : m,
                       n % divisor == 0 ? n / divisor : n,
                       divisor
                   );
        } else {
            return NZS(m, n, divisor + 1);
        }
    }
}

int main() {
    int n;
    int array[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int nzs = NZS(array[0], array[1], 2);
    for (int i = 2; i < n; i++) {
        nzs = NZS(nzs, array[i], 2);
    }
    cout << nzs;

    return 0;
}
