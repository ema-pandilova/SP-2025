//
// Created by ema on 28.12.25.
//
#include<iostream>
#include<cstring>
#include <cctype>

using namespace std;

// Од стандарден влез се внесува должината N (2 < N < 100) на низа и елементите на низата - природни броеви во опсег [-5000, 5000]. Во низата има барем две различни вредности.
//
// Да се напише програма којашто еднаш ќе ја измине низата и ќе ги отпечати како во примерот:
// - првиот помал број од елементот со најголема вредност (вториот по големина)
// - аритметичката средина.

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int nextMax = -5000;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            nextMax = max;
            max = arr[i];
        } else if (arr[i] < max && arr[i] > nextMax) {
            nextMax = arr[i];
        }
    }

    cout << nextMax << endl;
    cout << sum / double(n) << endl;
}
