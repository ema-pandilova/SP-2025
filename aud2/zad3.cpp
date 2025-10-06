//
// Created by ema on 6.10.25.
//
// Да се напише програма која за дадени страни на еден разностран триаголник ќе ги отпечати на екран периметарот и квадратот од плоштината (нека се работи со a = 5, b = 7.5, c = 10.2).

#include <iostream>
using namespace std;

int main() {
    float a = 5.0;
    float b= 7.5;
    float c =10.2;
    float L = a+b+c;
    cout<<"Perimetarot e "<<L<<endl;
    float s=L/2;
    float P = s*(s-a)*(s-b)*(s-c);
    cout<<"Ploshtinata e: "<<P<<endl;
    return 0;
}