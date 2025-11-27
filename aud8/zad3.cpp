//
// Created by ema on 23.11.25.
//
#include <iostream>
using namespace std;

int main() {
    int array[100];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int sumOddPositions = 0;
    int sumEvenPositions = 0;

    for (int i = 0; i < size; i++) {
        if(i%2 == 0) {
            sumEvenPositions += array[i];
        }
        else {
            sumOddPositions += array[i];
        }
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout<<endl;
    cout << sumEvenPositions << endl;
    cout << sumOddPositions << endl;
    return 0;
}