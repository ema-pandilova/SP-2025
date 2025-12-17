//
// Created by ema on 15.12.25.
//
#include <iostream>
using namespace std;

// Да се напишат фунција за сортирање на низа со помош на методот за сортирање - Метод на меурче (Bubble sort)
// Да се напишат функции за внесување и печатење на елементите на една низа и да се напише главна програма во која се тестира методот

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
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
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    return 0;
}
