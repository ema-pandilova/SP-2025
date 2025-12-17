//
// Created by ema on 15.12.25.
//

#include <iostream>
using namespace std;

// Да се напише програма која за дадена низа од цели броеви (која што се внесува од тастатура) ќе го отпечати најголемиот елемент.
// Програмата треба да содржи рекурзивна функција за наоѓање на најголем елемент во дадена низа.

int findMaxElement(int arr[], int n, int i, int currentMax) {
    if (i == n) {
        return currentMax;
    } else {
        if (arr[i] > currentMax) {
            currentMax = arr[i];
        }
        return findMaxElement(arr, n, i + 1, currentMax);
    }
}

int main() {
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMaxElement(arr, n, 0, arr[0]) << endl;
}
