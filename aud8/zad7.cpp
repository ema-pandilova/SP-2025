//
// Created by ema on 23.11.25.
//
#include <iostream>
using namespace std;

// Да се напише програма која што ќе ги избрише дупликатите од една низа.
// На крај, да се испечати на екран новодобиената низа. Елементите од низата се читаат од стандарден влез.

int main() {
    int array[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    // 1. iterirame niz elementite od nizata
    for(int i = 0; i < size; i++) {
        int fixedElement = array[i];
        // 2. gi terirame site elementi posle i-tiot
        for(int j=i+1; j < size; j++) {
            // naogjame duplikat na fiksiraniot element
            if(fixedElement == array[j]) {
                // 3. pravime pomestuvanja
                for(int k=j; k<size-1; k++ ){
                    array[k]=array[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    return 0;


}