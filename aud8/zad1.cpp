//
// Created by ema on 23.11.25.
//

#include <iostream>
using namespace std;

int main() {
    int array[100];
    int size;
    cin >> size;
    int sum = 0;
    for(int i=0; i<size; i++) {
        cin >> array[i];
        sum += array[i];
    }
    double average = sum * 1.0 / size;
    cout << average << endl;

    for(int i=0; i<size; i++) {
        cout << array[i] << " -> " << abs(average - array[i]) << endl;
    }

}