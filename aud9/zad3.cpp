//
// Created by ema on 1.12.25.
//
#include <iostream>
using namespace std;

// Да се напише програма која за матрица внесена од тастатура ќе ги замени елементите од
// главната дијагонала со разликата од максималниот и минималниот елемент во матрицата.
// Резултантната матрица да се испечати на екран.

int main() {
    int matrix[100][100];
    int m;
    cin>>m;

    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            cin>>matrix[i][j];
        }
    }
    int max = matrix[0][0];
    int min = matrix[0][0];

    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            if(max<matrix[i][j]) {
                max = matrix[i][j];
            }
            if(min>matrix[i][j]) {
                min = matrix[i][j];
            }
        }
    }
    int diff = max - min;
    // for(int i=0; i<m; i++) {
    //     for(int j=0; j<m; j++) {
    //         if(i==j) {
    //             matrix[i][j] = diff;
    //         }
    //     }
    // }
    for(int i=0; i<m; i++) {
        matrix[i][i] = diff;
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}