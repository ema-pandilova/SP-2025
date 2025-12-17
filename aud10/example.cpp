//
// Created by ema on 11.12.25.
//

#include <iostream>
using namespace std;

// Пример за рекурзивна функција:
int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
}
