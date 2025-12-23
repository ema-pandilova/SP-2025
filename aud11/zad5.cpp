//
// Created by ema on 15.12.25.
//
#include <iostream>
using namespace std;

// Да се напишат следните функции за пребарување во низа: • Линеарно пребарување • Бинарно пребарување
// Потоа да се напише главна програма во која ќе се пополнува низа со броевите од 1 до 1 000 000,
// а потоа се генерира случаен број во овој опсег чија што позиција треба да се пронајде со повикување на двете функции за пребарување.

int linearSearch(int *arr, int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int *arr, int key, int start, int end) {
    while(start<=end) {
        int mid = (start+end)/2;
        if(key == arr[mid]) {
            return mid;
        }
        else if(key<arr[mid]) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }

    return -1;
}

int binarySearchRecursive(int *arr, int key, int start, int end) {
    if(start>end) {
        return -1;
    }
    else {
        int mid = (start+end)/2;
        if(arr[mid] == key) {
            return mid;
        }
        else if(key<arr[mid]) {
            return binarySearchRecursive(arr, key, start, mid-1);
        }
        else {
            return binarySearchRecursive(arr, key, mid+1, end);
        }
    }
}
int main() {
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i); //cin>>arr[i]
    }
    cout << linearSearch(arr, n, 100) << endl;
    cout << binarySearch(arr, 100, 0, n-1) << endl;
}