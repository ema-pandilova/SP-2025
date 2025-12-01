//
// Created by ema on 1.12.25.
//
#include <iostream>
using namespace std;

// Да се напише програма која за матрица внесена од тастатура ќе ја пресмета разликата на
// збирот на елементите на непарните колони и збирот на елементите на парните редици.
// Матрицата не мора да биде квадратна.
int main() {

    int matrix[100][100];
    int n,m;
    cin>>m>>n;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>matrix[i][j];
        }
    }
    int sumOddColumns = 0, sumEvenRows = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(j%2==0) {
                sumOddColumns += matrix[i][j];
            }
            if(i%2==1) {
                sumEvenRows += matrix[i][j];
            }
        }
    }

    cout<<sumOddColumns<<" "<<sumEvenRows;
    return 0;
}