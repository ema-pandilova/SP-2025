//
// Created by ema on 11.12.25.
//
#include <iostream>
using namespace std;
//NZD

int NZD(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return NZD(n, m % n);
    }
}

int main() {
    // int n,m;
    // cin>>m>>n;
    // cout<<NZD(m,n);
    int n;
    int array[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int nzd = NZD(array[0], array[1]);
    for (int i = 2; i < n; i++) {
        nzd = NZD(nzd, array[i]);
    }
    cout << nzd;

    return 0;
}
