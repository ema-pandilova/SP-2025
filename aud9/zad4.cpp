//
// Created by ema on 1.12.25.
//
#include <iostream>
using namespace std;

// Да се напише програма која за квадратна матрица внесена од тастатура ќе испечати
// на екран дали таа е симетрична во однос на главната дијагонала.
int main() {
    int matrix[100][100];
    int m;
    cin>>m;

    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            if(matrix[i][j]!=matrix[j][i]) {
                cout<<"ASSYMETRIC"<<endl;
                return 0;
            }
        }
    }

    // for(int i=1; i<m; i++) {
    //     for(int j=0; j<i; j++) {
    //         if(matrix[i][j]!=matrix[j][i]) {
    //             cout<<"ASSYMETRIC"<<endl;
    //             return 0;
    //         }
    //     }
    // }
    cout<<"SYMETRIC"<<endl;
    return 0;
    }


