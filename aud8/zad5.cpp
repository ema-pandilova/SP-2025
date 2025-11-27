//
// Created by ema on 23.11.25.
//
#include <iostream>
using namespace std;

// Да се напише програма за ротирање на елементите на една низа за едно место во десно.
// На крај, да се испечати на екран ротираната низа. Елементите од низата се читаат од стандарден влез.

int main() {
    int array[100];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    // 1. go chuvame posledniot element od nizata
    int temp = array[size-1];

    // 2. da napravime shift na desno na ostanatite elementi
    for(int i=size-1; i>=1; i--) {
        array[i]=array[i-1];
    }
    // 3. poslednata vrednost doagja na prvo mesto
    array[0]=temp;

    for(int i=0; i<size; i++) {
        cout << array[i] << " ";
    }
    return 0;
}