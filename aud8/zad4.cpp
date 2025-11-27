//
// Created by ema on 23.11.25.
//
#include <iostream>
using namespace std;

// Да се напише програма која ќе провери дали дадена низа од n елементи која се чита од
// стандарден влез е строго растечка, строго опаѓачка или ниту строго растечка ниту строго опаѓачка.
// Резултатот да се испечати на екран.

int main() {
    int array[100];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    bool ascending = true;
    bool descending = true;

    for(int i = 0 ; i < size-1; i++) {
        if(array[i] < array[i+1]) {
            descending = false;
        }
        else if(array[i] > array[i+1]) {
            ascending = false;
        } else {
            ascending = descending = false;
        }

    }

    if(ascending) {
        cout<<"ASCENDING"<<endl;
    }
    else if(descending) {
        cout<<"DESCENDING"<<endl;
    }
    else {
        cout<<"NEITHER"<<endl;
    }


    return 0;
}