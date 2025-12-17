//
// Created by ema on 15.12.25.
//
#include <iostream>
using namespace std;

// Да се напише програма која за дадена низа од цели броеви (која што се внесува од тастатура)
// ќе го отпечати збирот на елементи од низата. Програмата треба да содржи рекурзивна функција за наоѓање на збирот на елементите во дадена низа.

int sumOfElementsNonRecursive(int arr[], int n) {
    int sum = 0;
    while (n != 0) {
        sum += arr[n];
        n--;
    }
    sum += arr[0];
    return sum;
}

int sumOfElementsRecursive(int arr[], int n) {
    if (n == 0) {
        return arr[0];
    } else {
        return arr[n] + sumOfElementsRecursive(arr, n - 1);
    }
}

int sumOfElementsRecursive2(int arr[], int n, int i) {
    if (i == n) {
        return 0;
    } else {
        return arr[i] + sumOfElementsRecursive2(arr, n, i + 1);
    }
}

int main() {
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << sumOfElementsNonRecursive(arr, n - 1) << endl;
    cout << sumOfElementsRecursive(arr, n - 1) << endl;
    cout << sumOfElementsRecursive2(arr, n, 0) << endl;
}
