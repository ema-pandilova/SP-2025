//
// Created by ema on 23.11.25.
//
#include <iostream>
using namespace std;
// Да се напише програма за ротирање на елементите на една низа за m местa во десно. На крај, да се испечати на екран ротираната низа.
// Елементите од низата и бројот на ротирања се читаат од стандарден влез.

int main() {

    int array[100];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    int k;
    cin>>k; // k - za kolku pozicii pravime pomestuvanje
    int temp[100];

    // 1. poslednite k elementi gi smestuvame vo temp
    for(int i = size -k; i < size; i++) {
        temp[i-(size-k)] = array[i];
    }

    // 2. gi transformirame elementite posle prvite k elementi
    for (int i = size - 1; i>=k; i--) {
        array[i] = array [i-k];
    }

    // 3. poslednite k elementi koi gi chuvavme vo temp, doagjaat na pochetok od nizata
    for(int i = 0; i < k; i++) {
        array[i] = temp[i];
    }

    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

}