//
// Created by ema on 15.12.25.
//
#include <iostream>
using namespace std;

void findMinMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        } else if (*(arr + i) > *max) {
            *max = *(arr + i);
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
    int min = 1000, max = 0;
    findMinMax(arr, n, &min, &max);
    cout << min << " " << max << endl;
    return 0;
}
