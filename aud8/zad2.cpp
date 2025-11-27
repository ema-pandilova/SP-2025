//
// Created by ema on 23.11.25.
//
#include <iostream>
using namespace std;

// Да се напише програма која за две низи кои се внесуваат од тастатура ќе провери дали се еднакви или не.
// На екран да се испачати резултатот од споредбата. Максимална големина на низите е 100.

int main() {
    int size1, size2;
    int array1[100], array2[100];
    cin >> size1 >> size2;
    for(int i=0; i<size1; i++) {
        cin >> array1[i];
    }
    for(int i=0; i<size2; i++) {
        cin >> array2[i];
    }
    if(size1!=size2) {
        cout<<"The arrays are not equal - the size "<<endl;
        return 0;
    }
    // int counter = 0;
    for(int i=0; i<size1; i++) {
        if(array1[i]!=array2[i]) {
            cout<<"The arrays are not equal - the elements"<<endl;
            // counter++;
            return 0;
        }
    }

    cout<<"The arrays are equal"<<endl;

    return 0;
}